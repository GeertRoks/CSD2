#simpleaudio is imported as sa -> shorter name
import simpleaudio as sa

"""
An example project in which three wav files are played after eachother.

------ HANDS-ON TIPS ------
- Answer the following question before running the code:
  Do you expect to hear the samples played simultaniously or after eachother?
  Why?

- Alter the code:
  Play the sounds simultaniously.

- Alter the code:
  Ask the user to choice which one of the three samples should be played and
  only the chosen sample.
"""

#load 3 audioFiles
sampleHigh = sa.WaveObject.from_wave_file("audioFiles/Pop.wav")
sampleMid = sa.WaveObject.from_wave_file("audioFiles/Laser1.wav")
sampleLow = sa.WaveObject.from_wave_file("audioFiles/Dog2.wav")

validchoice = False

#ask for input
choice = input("What sample would you like to hear? Type 1, 2 or 3. -> ")
while validchoice == False:
    if choice.isdigit() and int(choice) < 4 and int(choice) > 0:
        choice = int(choice)
        validchoice = True

    else:
        print("Please type 1, 2 or 3.")
        choice = input("What sample would you like to hear? ")

if choice == 1:
    #play high sample
    sampleHighPlay = sampleHigh.play()
    #wait till sample is done playing
    #sampleHighPlay.wait_done()

if choice == 2:
    #play mid sample
    sampleMidPlay = sampleMid.play()
    #wait till sample is done playing
    #sampleMidPlay.wait_done()

if choice == 3:
    #play low sample
    sampleLowPlay = sampleLow.play()
    #wait till sample is done playing
    #sampleLowPlay.wait_done()
