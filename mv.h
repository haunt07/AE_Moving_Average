#ifndef mva
#define mva
#include <Arduino.h>

class moving_average
{
  private:
    float sum = 0;
    int index = 0;
    int jumlah = 0;
    float *data;

  public:
    moving_average(int jumlah);
    float process(float nilai);
};

#endif