#include <Arduino.h>

void setup() {
    Serial.begin(38400); //PC SERIAL MONITO
    Serial1.begin(38400); //HC-05 AT MODE

// write your initialization code here
}

void loop() {
    //PC TO BLUETOOTH
    if (Serial.available()) {
        Serial1.write(Serial.read());
    }
    //BLUETOOTH TO PC
    if (Serial1.available()) {
        Serial.write(Serial1.read());
    }
// write your code here
}