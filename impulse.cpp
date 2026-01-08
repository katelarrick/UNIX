#include "everything.h"

int main(int argc, char* argv[]) {
  float phase = 0;
  float frequency = 440.0;

  for (int i = 0; i < SAMPLE_RATE * 2; ++i) {
    float v = 0;

    for(int h=1; h <=19; h++) {
      v += sin(phase * h);
    }
    v /= 19;
  
    mono(v * 0.707);
    phase += 2 * pi * frequency / SAMPLE_RATE;
    if (phase > 2 * pi) 
      phase -= 2 * pi;
  }
}


