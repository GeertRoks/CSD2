import simpleaudio as sa
import time
import random

"""
An example project in which a sequence (one measure, multiple samples) is played.
  - Sixteenth note is the smallest used note duration.
  - One meassure, time signature: 3 / 4

Instead of using steps to iterate through a sequence, we are checking the time.
We will trigger events based on their eventtime.

------ HANDS-ON TIPS ------
- Answer the following questions before running the code:
  - Line 74 is outcommented. However, this line is essential to enable correct
    playback of the sequence.
    Read the code: what will go wrong?
    --> Samples are in the way they are put into the list: so first all from seq1
        then everything from seq2 and then seq3, so it will first play through all
        from seq1 and then play the rest, because they are all past their triggerpoint.
    Check your answer by running the script with the outcommented line.
  - Remove the [#] at the beginning of the line, what will happen now?
    --> Samples will be placed in order wich they have to be triggered in.
    Check your answer by running the script.

- Add comments:
  A few comments are missing in this script.
  The lines: 63, 67, 71 contain the numbers 0, 1, 2, and are added to the
  timeEvents list. To 'what' do these numbers refer?
  Add meaningfull comments.

- Alter the code:
  Currently the sequence is only played once.
  Alter the code to play it multiple times.
  hint: The events list is emptied using the pop() function. Copy it first?
"""

#______________________________________________________________________________
#NOTE: THIS SCRIPT CONTAINS DUPLICATE CODE = USEFULL EXAMPLE, SEE HANDS-ON TIPS
#______________________________________________________________________________

#load 3 audioFiles and store it into a list
samples = [ sa.WaveObject.from_wave_file("audioFiles/Pop.wav"),
            sa.WaveObject.from_wave_file("audioFiles/Laser1.wav"),
            sa.WaveObject.from_wave_file("audioFiles/Dog2.wav"), ]

#set bpm
bpm = 120
#calculate the duration of a quarter note
quarterNoteDuration = 60 / bpm
#calculate the duration of a sixteenth note
sixteenthNoteDuration = quarterNoteDuration / 4.0
#number of beats per sequence (time signature: 3 / 4 = 3 beats per sequence)
beatsPerMeasure = 3
#calculate the duration of a measure
measureDuration = beatsPerMeasure  * quarterNoteDuration

#create a list to hold the events
events = []
#create lists with the moments (in 16th) at which we should play the samples
sequence1 = [0, 2, 4, 8, 11]
sequence2 = [3, 6, 10]
sequence3 = [9, 13]

#transform the sixteenthNoteSequece to an eventlist with time values
for sixteenNoteIndex in sequence1:
  events.append([sixteenNoteIndex * sixteenthNoteDuration, 0])

#transform the sixteenthNoteSequece to an eventlist with time values
for sixteenNoteIndex in sequence2:
  events.append([sixteenNoteIndex * sixteenthNoteDuration, 1])

#transform the sixteenthNoteSequece to an eventlist with time values
for sixteenNoteIndex in sequence3:
  events.append([sixteenNoteIndex * sixteenthNoteDuration, 2])

#NOTE: The line below is essential to enable a correct playback of the events
events.sort()

print(events)   #display the event list

copyEvents = list(events)     #Eventscopy for repeating
event = events.pop(0)   #retrieve first event
startTime = time.time() #retrieve the startime: current time
keepPlaying = True

#play the sequence
while keepPlaying:
    #retrieve current time
    currentTime = time.time()
    #check if the event's time (which is at index 0 of event) is passed
    if(currentTime - startTime >= event[0]):
        #play sample -> sample index is at index 1
        samples[event[1]].play()
        #if there are events left in the events list
        if events:
            #retrieve the next event
            event = events.pop(0)
        else:
            #list is empty, refill
            events = list(copyEvents)
            event = events.pop(0)
            startTime = time.time()
    else:
        #wait for a very short moment
        time.sleep(0.001)
