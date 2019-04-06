# Moving Average
Library simple moving average for arduino
## usage
Declare an object and set the number of time period  
```c++
simple_moving_average objects(n);
```
Add new value and return the result
```c++
objects.process(value);
```
