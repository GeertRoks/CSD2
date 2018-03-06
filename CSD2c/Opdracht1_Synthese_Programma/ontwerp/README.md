# CSD2c Opdracht 1 Ontwerp


## Algemeen ##
Command-linebased, hardwired, subtractive synthesizer met 2 oscillatoren en midi Input. Terwijl het programma draait, moet de gebruiker tonen, waveforms, volume, e.d. aan kunnen passen. Liefst zonder glitches en popjes. Dit project wordt verder gebouwd op wat ik heb gemaakt in het vorige blok.

## Functionaliteiten ##
  -	2 Oscillatoren
      -	Keuze uit waveforms: Sine, Square, Saw, (evt. Triangle en Noise)
      -	Squarewave heeft pulse width modulation
  -	Midi input (Class)
      -	Eerst in command line per noot (softwarematig).
      -	Onderzoeken of hardware aansturing ook mogelijk is. (monofoon)
      -	Note on’s en off’s (envelopes?)
  -	Multithreading of interleaved processing of iets anders … ?
      -	Uitzoeken wat de beste manier is om geluid te laten spelen en tegelijk commando’s door te sturen via de commandline.
  -	Filter
      -	Simpel laagdoorlaatfilter met aanpasbare resonantiepiek.
  -	Helpfile
      -	Duidelijke limieten, zonder crashes
      -	Idiot-proof
      -	Alle commando’s
      -	Uitleg bij opstarten dat met commando naar help alle commando’s te zien zijn.

## Extra functionaliteiten ##
  -	Lfo’s
      -	Derived class van osillator.h
      -	Verschillende waveforms (saw rampUp/Down, pwm)
      -	Input frequentie range.
  -	Envelope
      -	ADSR
      -	AR
  -	Routing
      -	Alle extra functionaliteiten moet aan andere parameters e.d. gekoppeld kunnen worden.
  -	Polyfonie?

## Toelichting keuze ##
Dit project wil ik graag doen, omdat het moeten ontwikkelen van een systeem dat stabiel draait terwijl je nieuwe opdrachten geeft mij interesseert en ik denk dat dat een systeem is dat veel voor komt. Daarom lijkt het mij een goede optie het te onderzoeken. Filters zijn ook objecten die veel voor zullen komen in geluid programmeren en daarom lijkt het me interessant om die “from scratch” te kunnen maken. Dan heb je helemaal door hoe deze werken.
