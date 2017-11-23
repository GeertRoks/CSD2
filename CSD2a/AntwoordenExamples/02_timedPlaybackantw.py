import simpleaudio as sa
import time
import random

"""
An example project in which three wav files are played after eachother with a
minor break in between.

------ HANDS-ON TIPS ------
- Alter the code:
  Write a function that plays the samples a given number of times.
  Use this function.

- Alter the code:
  Change the time in between samples into a random value.
  E.g. wait 0.25, 0.5, or 1 second.
  hint:  there is a standard random package available with a random function
         https://docs.python.org/2/library/random.html
         A standard package does not need to be installed with pip, but it does
         need to be imported.
"""
#load 3 audioFiles into a list
samples = [ sa.WaveObject.from_wave_file("audioFiles/Pop.wav"),
            sa.WaveObject.from_wave_file("audioFiles/Laser1.wav"),
            sa.WaveObject.from_wave_file("audioFiles/Dog2.wav")]

#initialise values
rndtime = 0

#Choice loop
while True:
    repeatvalue = input("How many times would you like to hear the samples? -> ")
    if repeatvalue.isdigit() and int(repeatvalue) >= 1:
        repeatvalue = int(repeatvalue)
        break
    else:
        print("Invalid answer. Please type any of the natural numbers except for zero.")
        continue

#Sample play loop
for repeatvalue in range (0, repeatvalue):
    for sample in samples:
        #random choice of sleep time
        rndtimechoice = random.randint(1, 3)
        if rndtimechoice == 1:
            rndtime = 0.25
        else:
            if rndtimechoice == 2:
                rndtime = 0.5
            else:
                rndtime = 1

        print(sample)
        sample.play()
        time.sleep(rndtime) #sleep for rndtime seconds
