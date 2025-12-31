/**********************
 * @file:           MotorTest.ino
 * @parts:          Arduino Uno, L298N Motor Driver, DC Motors
 * @connections:    enA Motor Driver -> Arduino GPIO 9
                    enB Motor Driver -> Arduino GPIO 10
                    in1 Motor Driver -> Arduino GPIO 7
                    in2 Motor Driver -> Arduino GPIO 6
                    in3 Motor Driver -> Arduino GPIO 11
                    in4 Motor Driver -> Arduino GPIO 12
                    DC Motor 1 Red -> Motor Driver OUT1
                    Dc Motor 1 Black -> Motor Driver OUT2
                    DC Motor 2 Red -> Motor Driver OUT4
                    DC Motor 2 Black -> Motor Driver OUT3
                    9V Battery Red -> Motor Driver +12V
                    9V Battery Black -> Motor Driver GND
 * @description:    Code for testing DC Motor functionality. Uncomment
                    segments from main loop to test. Also contains 
                    commented code for motor speed testing if required.
**********************/


// int enA = 9;
int in1 = 7;
int in2 = 6;
// int enB = 10;
int in3 = 11;
int in4 = 12;


void setup() {

    // Initialize connections 
    Serial.begin(9600);

    // pinMode(enA, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    // pinMode(enB, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);

    // analogWrite(enA, 90);
    // analogWrite(enB, 90);

}

void loop() {

    // left goes forward
    //digitalWrite(in1, HIGH);
    //digitalWrite(in2, LOW);

    // left goes backward
     //digitalWrite(in1, LOW);
     //digitalWrite(in2, HIGH);

    // right goes backward
     //digitalWrite(in3, LOW);
     //digitalWrite(in4, HIGH);

    // right goes forward
     //digitalWrite(in3, HIGH);
     //digitalWrite(in4, LOW);

}