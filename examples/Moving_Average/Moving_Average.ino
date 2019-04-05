#include <mv.h>

moving_average sensor_1(3);
moving_average sensor_2(5);

void setup(){
    Serial.begin(9600);

    for(int i=0;i<=10;i++){
        Serial.print(i);
        Serial.print("\t");
        Serial.println(sensor_1.process(i));
    }
    Serial.println("\n");
    for(int i=0;i<=10;i++){
        Serial.print(i);
        Serial.print("\t");
        Serial.println(sensor_2.process(i));
    }
}



void loop(){

}
