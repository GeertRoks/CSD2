import random

def KickGen(seq):
    while True:
        rndnote = random.randint(0, 15)
        if rndnote in seq:
            continue
        else:
            break
    seq.append(rndnote)
    seq = sorted(seq)
    return seq

def SnareGen(kseq):
    seq = []
    for i in range(0, 3):
        while True:
            rndnote = random.randint(0, 15)
            if rndnote in kseq:
                continue
            else:
                break
        seq.append(rndnote)
    seq = sorted(seq)
    return seq

snre = SnareGen([0, 8, 10])

print(snre)
