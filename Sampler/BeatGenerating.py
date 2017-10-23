import random
import time


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
    #TODO: Improve kick and snare algorithm
    Kick_seq =  KickGen([0, 8], amountOfSixteenths)
    Snare_seq = SnareGen(Kick_seq, amountOfSixteenths)
    HiHat_seq =  HiHatGen(amountOfSixteenths)

    print(Kick_seq)
    print(Snare_seq)
    print(HiHat_seq)

    return Kick_seq, Snare_seq, HiHat_seq

#PlaybackThread
def PlaybackThread(events, samples, measureInterval):
    #Playback init
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

#Kick Generator
def KickGen(seq, amountOfSixteenths):
    while True:
        rndnote = random.randint(0, (amountOfSixteenths - 1))
        if rndnote in seq:
            continue
        else:
            break
    seq.append(rndnote)
    seq = sorted(seq)
    return seq


#Snare Generator
def SnareGen(kseq, amountOfSixteenths):
    seq = []
    for i in range(0, 3):
        while True:
            rndnote = random.randint(0, (amountOfSixteenths - 1))
            if rndnote in kseq or rndnote in seq:
                continue
            else:
                break
        seq.append(rndnote)
    seq = sorted(seq)
    return seq


#HiHat Generator
def HiHatGen(amountOfSixteenths):
    seq = []
    rndchoice = random.randint(0, 3)
    if rndchoice == 0:  #sixteenth not HiHat
        for i in range(amountOfSixteenths):
            seq.append(i)
    elif rndchoice == 1: #eight note HiHat
        for i in range(amountOfSixteenths):
            test = (i + 2) / 2
            print(test)
            if test.is_integer():
                seq.append(i)
    else:                #offbeat eight note HiHat
        for i in range(amountOfSixteenths):
            test = (i + 1) / 2
            print(test)
            if test.is_integer():
                seq.append(i)
    seq = sorted(seq)
    return seq
