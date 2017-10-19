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
