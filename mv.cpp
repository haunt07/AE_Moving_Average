#include "mv.h"

moving_average::moving_average(int jumlah){
    this->jumlah=jumlah;
}
float moving_average::process(float nilai){
    this->sum-=this->data[index];
    this->sum+=nilai;
    this->data[this->index]=nilai;
    if(++this->index>this->jumlah-1){
        this->index=0;
    }
    return this->sum/this->jumlah;
}