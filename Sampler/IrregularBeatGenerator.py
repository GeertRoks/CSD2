import simpleaudio as sa
import time
import BeatGenerating as bg


#input questions
    #time signiture
while True:
    try:
        timesig = input("What time signiture would you like to hear? --> ")
        timesig = timesig.strip().split("/") #timesig is now a list with [beats, count]

        beatUnit = int(timesig[1]) #Check Beat Unit
        if beatUnit != 2 and beatUnit != 4 and beatUnit != 8 and beatUnit != 16:
            print("Invalid beat unit. The beat unit has to be 2, 4, 8 or 16. Please enter one of the valid options.")
            continue

        beatsPerMeasure = int(timesig[0])  #Check Beats per meassure
        if beatsPerMeasure < 2 or  beatsPerMeasure > 12:
            print("Invalid beats per measure. The amount of beats per measure should be between 2 and 12.")
            continue
        else:
            break

    except:
        print("Invalid time signiture. Please enter a valid time signiture. For example: 7/8")
        continue

    #bpm
while True:
    bpm = input("How many beats per minute? --> ")
    if bpm.isdigit() and int(bpm) >= 40 and int(bpm) <= 300:
        bpm = int(bpm)
        beatInterval = (240/beatUnit)/(bpm) #bpm conversion, interval for beatUnit
        sixteenInterval = 15/(bpm) #interval of a sixteenth note
        measureInterval = beatsPerMeasure  * beatInterval #interval of a measure
        amountOfSixteenths = beatsPerMeasure * (16/beatUnit)
        break
    else:
        print("Invalid response. Please enter a value between 40 and 300.")


    #drumkit TODO: Choose and download sample kits
while True:
    print("1. First selcetion")     #jazz kit
    print("2. Second selection")    #Rock kit
    print("3. Third selection")     #808
    print("4. Fourth Selection")    #African?
    drumkit = input("what kit would you like to play the beat on? --> ")
    if drumkit.isdigit() and int(drumkit) >= 1 and int(drumkit) <= 4:
        drumtkit = int(drumkit)
        break
    else:
        print("Invalid response. Please enter a value between 1 and 4")
        continue
if drumkit == 1:
    samples = [ sa.WaveObject.from_wave_file("Kick.wav"),
                sa.WaveObject.from_wave_file("Snare.wav"),
                sa.WaveObject.from_wave_file("Tom.wav"),    ]
else:
    if drumkit == 2:
        samples = [ sa.WaveObject.from_wave_file("Kick.wav"),
                    sa.WaveObject.from_wave_file("Snare.wav"),
                    sa.WaveObject.from_wave_file("Tom.wav"),    ]
    else:
        if drumkit == 3:
            samples = [ sa.WaveObject.from_wave_file("Kick.wav"),
                        sa.WaveObject.from_wave_file("Snare.wav"),
                        sa.WaveObject.from_wave_file("Tom.wav"),    ]
        else:
            samples = [ sa.WaveObject.from_wave_file("Kick.wav"),
                        sa.WaveObject.from_wave_file("Snare.wav"),
                        sa.WaveObject.from_wave_file("Tom.wav"),    ]


events = []

#TODO: Random beat generating
Kick_seq =  bg.KickGen([0, 8], amountOfSixteenths)
Snare_seq = bg.SnareGen(Kick_seq, amountOfSixteenths)      #number represents place in grid
Tom_seq =   []

print(Kick_seq)
print(Snare_seq)

#transform the sixteenthNoteSequece to an eventlist with time values
for sixteenIndex in Kick_seq:
  events.append([sixteenIndex * sixteenInterval, 0])

for sixteenIndex in Snare_seq:
  events.append([sixteenIndex * sixteenInterval, 1])

for sixteenIndex in Tom_seq:
  events.append([sixteenIndex * sixteenInterval, 2])

events.sort() #sort events list so everything is in line to play at the right time
copyEvents = list(events) #events copy for repeating
event =events.pop(0)
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
