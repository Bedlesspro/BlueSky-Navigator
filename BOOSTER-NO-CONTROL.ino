#include <Servo.h>

Servo, LEG1
Servo, LEG2
Servo, LEG3
Servo, LEG4
Servo, SEP1
Servo, SEP2
Servo, FIN1
Servo, FIN2
Servo, FIN3
Servo, FIN4

int smoke_sensor_pin = A0;

void setup {
  Serial.begin(9600);
  LEG1.attach(4)
  LEG2.attach(5)
  LEG3.attach(6)
  LEG4.attach(7)
  FIN1.attach(8)
  FIN2.attach(9)
  FIN3.attach(10)
  FIN4.attach(11)
  SEP2.attach(13)
  LEG1.write(90)
  LEG2.write(90)
  LEG3.write(90)
  LEG4.write(90)
  FIN1.write(90)
  FIN2.write(90)
  FIN3.write(90)
  FIN4.write(90)
  SEP1.write(0)
  SEP2.write(0)
}

void loop {
  int analogSensor = analogRead(smoke_sensor_pin);
  if (analogSensor > 400){
    delay(1900)
    LEG1.write(211)
    LEG2.write(211)
    LEG3.write(211)
    LEG4.write(211)
    FIN1.write(180)
    FIN2.write(180)
    FIN3.write(180)
    FIN4.write(180)
    SEP1.write(270)
    SEP2.write(270)
  }
}