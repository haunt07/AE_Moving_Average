/*
  https://github.com/haunt07/AE_Moving_Average
*/

#include <mv.h>

simple_moving_average sensor_1(3); // number of time periods is 3
simple_moving_average sensor_2(5); // number of time periods is 5

void setup()
{
    // example for simple moving average
    Serial.begin(9600);
    Serial.println("Sensor 1\nValue\tResult");
    for (int i = 0; i <= 10; i++)
    {
        Serial.print(i);
        Serial.print("\t\t");
        Serial.println(sensor_1.process(i)); // add new value and return the result
    }
    Serial.println("\nSensor 2\nValue\tResult");
    for (int i = 0; i <= 10; i++)
    {
        Serial.print(i);
        Serial.print("\t\t");
        Serial.println(sensor_2.process(i)); // add new value and return the result
    }
}

void loop()
{
    // put your main code here:

}