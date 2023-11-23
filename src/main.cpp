#include <Arduino.h>

#include <Motor.h>
#include <Encoder.h>

Encoder encoder(1,2, 500);
Motor motor(4, 5, 6, &encoder);

void setup(){
    Serial.begin(9600);
}

void loop(){
    Serial.println(encoder.getRevolutions());
    motor.update();
}