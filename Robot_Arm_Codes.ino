#include <Servo.h>
int xPin = A0; 
int yPin = A1; 
int zPin = A2;
int qPin = A3;

Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4; 
 
int xPozisyon = 0;
int yPozisyon = 0;
int zPozisyon = 0;
int qPozisyon = 0;
 
void setup() {
pinMode(xPin, INPUT);
pinMode(yPin, INPUT);
pinMode(zPin, INPUT);
pinMode(qPin, INPUT);
motor1.attach(0);
motor2.attach(1);
motor3.attach(2);
motor4.attach(3);
}
 
void loop() {
xPozisyon = map(analogRead(xPin),0,1023,0,180);
yPozisyon = map(analogRead(yPin),0,1023,0,180);
motor1.write(xPozisyon);
motor2.write(yPozisyon);
zPozisyon = map(analogRead(zPin),1023,0,0,180);
qPozisyon = map(analogRead(qPin),1023,0,0,180);
motor3.write(zPozisyon);
motor4.write(qPozisyon);


delay(10);
}