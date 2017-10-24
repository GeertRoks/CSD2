import time
import _thread
import BeatGenerating as bg
import UI

UI.startUp()

global beatsPerMeasure,beatUnit, amountOfSixteenths, measureInterval, sixteenInterval, samples, events


#Transfer random beat to an Event list
def EventList(sixteenInterval, Kick_seq, Snare_seq, HiHat_seq):
    events = []

    #transform the sixteenthNoteSequece to an eventlist with time values
    for sixteenIndex in Kick_seq:
      events.append([sixteenIndex * sixteenInterval, 0])

    for sixteenIndex in Snare_seq:
      events.append([sixteenIndex * sixteenInterval, 1])

    for sixteenIndex in HiHat_seq:
      events.append([sixteenIndex * sixteenInterval, 2])
    events.sort() #sort events list so everything is in line to play at the right time

    return events


#Beat Generating
def GenerateBeat(amountOfSixteenths):
    #TODO: Improve snare algorithm
    Kick_seq =  bg.KickGen(amountOfSixteenths)
    Snare_seq = bg.SnareGen(Kick_seq, amountOfSixteenths)
    HiHat_seq =  bg.HiHatGen(amountOfSixteenths)

    print(Kick_seq)
    print(Snare_seq)
    print(HiHat_seq)

    return Kick_seq, Snare_seq, HiHat_seq

#PlaybackThread
def PlaybackThread():
    global events, samples, measureInterval

    #Playback init
    copyEvents = list(events) #events copy for repeating
    event = events.pop(0)
    t0 = time.time()    #save starting time for refrence
    while True:
        currentTime = time.time()
        if currentTime - t0 >= event[0]: #Check if it's time to play a sample
            samples[event[1]].play()

            if events:  #if there are events left in the events list
                event = events.pop(0)
            else:   #list is empty, wait untill measure is done, then refill
                while True:
                    currentTime = time.time()
                    if currentTime - t0 >= measureInterval:
                        events = list(copyEvents)
                        event = events.pop(0)
                        t0 = time.time()
                        break
                    else:
                        time.sleep(0.01)
                        continue

        else:
            time.sleep(0.01)



#input questions
    #time signature
beatsPerMeasure, beatUnit, amountOfSixteenths = UI.timeSig()

    #bpm
measureInterval, sixteenInterval= UI.BPM(beatsPerMeasure, beatUnit)

    #drumkit TODO: Choose and download sample kits
samples = UI.drumkitSelection()


#Beat Generating
Kick_seq, Snare_seq, HiHat_seq = GenerateBeat(amountOfSixteenths)
events = EventList(sixteenInterval, Kick_seq, Snare_seq, HiHat_seq)

#Input Thread during playback
#TODO:
try:
   _thread.start_new_thread(PlaybackThread, ())
except:
   print("Error: unable to start thread \n")


# Loop checking for user input
while True:

    # Wait for keyboard input
    userInput = input("> ")

    # Splits input into a list, allows evaluating indiviual words
    userInput = userInput.split(" ", 1)

     # BPM
    if userInput[0].lower() == "bpm":
        measureInterval, sixteenInterval= UI.BPM(beatsPerMeasure, beatUnit)
        events = EventList(sixteenInterval, Kick_seq, Snare_seq, HiHat_seq)


    # Exit program
    elif userInput[0].lower() == "exit" or userInput[0].lower() == "quit":
        UI.shutDown()

    # Command not recognized
    else:
        print(" ".join(userInput),"not recognized, type help for an overview of all commands \n")
