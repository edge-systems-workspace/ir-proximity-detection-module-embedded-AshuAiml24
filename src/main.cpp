#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author ASHU PAL
 * @date 2026-02-06
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

#include <Arduino.h>
int irPin = 2;
void setup() {

    pinMode(irPin, INPUT);

    Serial.begin(9600);

}
void loop() {

    int value = digitalRead(irPin);
    if (value == LOW) { // Active LOW sensor

        Serial.println("Object Detected");
    } else {

        Serial.println("No Object Detected");

    }

    delay(300);

}