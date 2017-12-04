


class Synthesizer
{
public:
  Synthesizer();
  ~Synthesizer();

  void proces();

private:
  int outputBufferRef [];

  float frequency;
  float amplitude;

};
