#include <Arduino.h>

void setup() {
    pinMode(13, OUTPUT);

    Serial.begin(9600);   // PC debug
    Serial1.begin(9600);  // Bluetooth data
}

void loop() {
    if (Serial1.available()) {
        char data = Serial1.read();
        Serial.println(data);   // Debug

        if (data == '1') digitalWrite(13, HIGH);
        if (data == '0') digitalWrite(13, LOW);
    }
}
