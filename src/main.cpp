#include <Arduino.h>

// TODO 1: Define IR sensor digital pin (Use pin 2)
const int IR_PIN = 2;

// TODO 2: Create variable to store sensor state
int irState = LOW;

void setup() {

    // TODO 3: Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);
    
    // TODO 4: Configure IR pin as INPUT
    pinMode(IR_PIN, INPUT);

    // TODO 5: Print system initialization message
    Serial.println("======================================");
    Serial.println(" Embedded Obstacle Detection System ");
    Serial.println("======================================");
    Serial.println("Monitoring IR sensor on Pin 2...");
}

void loop() {

    // TODO 6: Read digital value from IR sensor
    irState = digitalRead(IR_PIN);

    // NOTE:
    // Most IR obstacle sensors output LOW when obstacle is detected.
    // If your sensor behaves differently, invert the condition.

    // TODO 7: Check obstacle condition
    if (irState == LOW) {
        Serial.println("Obstacle Detected");
    } 
    else {
        Serial.println("No Obstacle");
    }

    Serial.println("------------------------------");

    // TODO 8: Add small delay (300ms)
    delay(300);
}
