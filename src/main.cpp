#include <Arduino.h>

#include <Motor.h>
#include <Encoder.h>

Encoder encoder(12, 13, 500);

void setup(){
    Serial.begin(9600);
    encoder.begin();
}

void loop(){
    Serial.println(encoder.getRevolutions());
    encoder.update();
}