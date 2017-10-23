import time
import _thread
import BeatGenerating as bg
import UI

UI.startUp()

#input questions
    #time signature
beatsPerMeasure, beatUnit, amountOfSixteenths = UI.timeSig()

    #bpm
measureInterval, sixteenInterval= UI.BPM(beatsPerMeasure, beatUnit)

    #drumkit TODO: Choose and download sample kits
samples = UI.drumkitSelection()

Kick_seq, Snare_seq, HiHat_seq = bg.GenerateBeat(amountOfSixteenths)
events = bg.EventList(sixteenInterval, Kick_seq, Snare_seq, HiHat_seq)

#Thread during playback
try:
   _thread.start_new_thread(bg.PlaybackThread, (events, samples, measureInterval))
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
        events = bg.EventList(sixteenInterval, Kick_seq, Snare_seq, HiHat_seq)


    # Exit program
    elif userInput[0].lower() == "exit" or userInput[0].lower() == "quit":
        UI.shutDown()

    # Command not recognized
    else:
        print(" ".join(userInput),"not recognized, type help for an overview of all commands \n")
