/**********************
 * @file:           SensorTest.ino
 * @parts:          Arduino Uno, IR sensor, 3 F-M wires
 * @connections:    IR VCC -> Arduino 3V3
                    IR GND -> Arduino GND
                    IR OUT -> Arduino GPIO 3
 * @description:    Code for testing IR sensor values over 
                    white background and black tape. Note that 
                    it may be required to adjust the 
                    sensitivity of the part to get accurate 
                    readings. Sensor should return a value of 1
                    over black tape and 0 over white background.
**********************/


int sensorPin = 4;

void setup() {

    pinMode(sensorPin, INPUT);
    Serial.begin(9600);

}

void loop() {

    int sensorValue = digitalRead(sensorPin);
    delay(30);
    Serial.println(sensorValue);

}