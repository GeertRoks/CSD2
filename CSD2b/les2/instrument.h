class Instrument
{
public:
  Instrument(std::string soundInput);
  void setSound(std::string soundInput);
  void makeSound();
  void makeMultipleSounds(int numTimes);
  void PlayofMusic();
private:
  std::string mSoundInput;

};
