import sys
import os
import simpleaudio as sa

def startUp():
    os.system('clear')
    print("Irregular Beat Generator (IBG)")
    print("Designed by: Geert Roks, 2017 \n")



def timeSig():  #input for Time signature
    while True:
        try:
            timesig = input("What time signature would you like to hear? --> ")
            timesig = timesig.strip().split("/") #timesig is now a list with [beats, count]

            beatUnit = int(timesig[1]) #Check Beat Unit
            if beatUnit != 2 and beatUnit != 4 and beatUnit != 8 and beatUnit != 16:
                print("Invalid beat unit. The beat unit has to be 2, 4, 8 or 16. Please enter one of the valid options. \n")
                continue

            beatsPerMeasure = int(timesig[0])  #Check Beats per meassure
            if beatsPerMeasure < 2 or  beatsPerMeasure > 12:
                print("Invalid beats per measure. The amount of beats per measure should be between 2 and 12.\n")
                continue
            elif beatsPerMeasure < 6 and beatUnit == 16:
                print("Shortest possible time signature is 6/16 or 3/8.\n")
            elif beatsPerMeasure == 2 and beatUnit == 8:
                print("Shortest possible time signature is 6/16 or 3/8.\n")
            elif beatsPerMeasure > 6 and beatUnit == 4:
                print("Longest possible time signature is 6/4 or 3/2.\n")
            elif beatsPerMeasure > 3 and beatUnit == 2:
                print("Longest possible time signature is 6/4 or 3/2.\n")
            else:
                break

        except:
            print("Invalid time signature. Please enter a valid time signature. For example: 7/8 \n" )

            continue
    return beatsPerMeasure, beatUnit



def BPM(beatsPerMeasure, beatUnit): #input for bpm + calculation
    while True:
        bpm = input("How many beats per minute? --> ")
        if bpm.isdigit() and int(bpm) >= 40 and int(bpm) <= 300:
            bpm = int(bpm)
            beatInterval = (240/beatUnit)/(bpm) #bpm conversion, interval for beatUnit
            sixteenInterval = 15/(bpm) #interval of a sixteenth note
            measureInterval = beatsPerMeasure  * beatInterval #interval of a measure
            amountOfSixteenths = beatsPerMeasure * int(16/beatUnit)
            break
        else:
            print("Invalid response. Please enter a value between 40 and 300.\n")
    return measureInterval, sixteenInterval, amountOfSixteenths



def drumkitSelection():
    while True:
        print("1. First selection")     #jazz kit
        print("2. Second selection")    #Rock kit
        print("3. Third selection")     #808
        print("4. Fourth Selection")    #African?
        drumkit = input("what kit would you like to play the beat on? --> ")
        if drumkit.isdigit() and int(drumkit) >= 1 and int(drumkit) <= 4:
            drumkit = int(drumkit)
            break
        else:
            print("Invalid response. Please enter a value between 1 and 4.\n")
            continue

    if drumkit == 1:
        samples = [ sa.WaveObject.from_wave_file("Kick.wav"),
                    sa.WaveObject.from_wave_file("Snare.wav"),
                    sa.WaveObject.from_wave_file("HiHat.wav"),    ]
    elif drumkit == 2:
        samples = [ sa.WaveObject.from_wave_file("Kick.wav"),
                    sa.WaveObject.from_wave_file("Snare.wav"),
                    sa.WaveObject.from_wave_file("HiHat.wav"),    ]
    elif drumkit == 3:
        samples = [ sa.WaveObject.from_wave_file("Kick.wav"),
                    sa.WaveObject.from_wave_file("Snare.wav"),
                    sa.WaveObject.from_wave_file("HiHat.wav"),    ]
    elif drumkit == 4:
        samples = [ sa.WaveObject.from_wave_file("Kick.wav"),
                    sa.WaveObject.from_wave_file("Snare.wav"),
                    sa.WaveObject.from_wave_file("Tom.wav"),      ]
    return samples



def shutDown():
    os.system('clear')
    sys.exit()
