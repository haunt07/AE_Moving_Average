/*
  https://github.com/haunt07/AE_Moving_Average
*/
#ifndef mva
#define mva
#include <Arduino.h>

class simple_moving_average
{
  private:
    float sum = 0;
    int index = 0;
    int jumlah = 0;
    float *data;

  public:
    simple_moving_average(int jumlah);
    float process(float nilai);
};

#endif