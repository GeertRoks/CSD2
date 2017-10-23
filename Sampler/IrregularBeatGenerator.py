import time

import BeatGenerating as bg
import UI

UI.startUp()

#input questions
    #time signature
beatsPerMeasure, beatUnit = UI.timeSig()

    #bpm
measureInterval, sixteenInterval, amountOfSixteenths = UI.BPM(beatsPerMeasure, beatUnit)

    #drumkit TODO: Choose and download sample kits
samples = UI.drumkitSelection()

#Beat Generating
#TODO: Random beat generating
Kick_seq =  bg.KickGen([0, 8], amountOfSixteenths)
Snare_seq = bg.SnareGen(Kick_seq, amountOfSixteenths)
HiHat_seq =  bg.HiHatGen(amountOfSixteenths)

print(Kick_seq)
print(Snare_seq)
print(HiHat_seq)

events = []

#transform the sixteenthNoteSequece to an eventlist with time values
for sixteenIndex in Kick_seq:
  events.append([sixteenIndex * sixteenInterval, 0])

for sixteenIndex in Snare_seq:
  events.append([sixteenIndex * sixteenInterval, 1])

for sixteenIndex in HiHat_seq:
  events.append([sixteenIndex * sixteenInterval, 2])
events.sort() #sort events list so everything is in line to play at the right time

#Playback
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
