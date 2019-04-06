#include "mv.h"

moving_average::moving_average(int jumlah)
{
    this->jumlah = jumlah;
    this->data = new float[this->jumlah];
    for (int i = 0; i < this->jumlah; i++)
    {
        this->data[i] = 0;
    }
}

float moving_average::process(float nilai)
{
    this->sum -= this->data[this->index];
    this->sum += nilai;
    this->data[this->index] = nilai;
    if (++this->index > this->jumlah - 1)
    {
        this->index = 0;
    }
    return this->sum / this->jumlah;
}