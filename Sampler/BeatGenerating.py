import random

def KickGen(seq, amountOfSixteenths):
    while True:
        rndnote = random.randint(0, amountOfSixteenths)
        if rndnote in seq:
            continue
        else:
            break
    seq.append(rndnote)
    seq = sorted(seq)
    return seq

def SnareGen(kseq, amountOfSixteenths):
    seq = []
    for i in range(0, 3):
        while True:
            rndnote = random.randint(0, amountOfSixteenths)
            if rndnote in kseq or rndnote in seq:
                continue
            else:
                break
        seq.append(rndnote)
    seq = sorted(seq)
    return seq

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
