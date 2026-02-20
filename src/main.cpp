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

    // TODO 6:
    // Read digital value from IR sensor

    // TODO 7:
    // If obstacle detected
    //     Print "Obstacle Detected"
    // Else
    //     Print "No Obstacle"

    // TODO 8:
    // Add small delay (200–500ms)
}
