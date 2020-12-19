#include <Servo.h>

Servo servo1;


const char AN_POTENTIOMETRE1 = A0;
const char PWM_SERVO1 = 8;

int positionDuServo1 = 0;

void setup() {
servo1.attach(8);
servo1.write(0);
}

void loop() {
positionDuServo1 = analogRead(AN_POTENTIOMETRE1);
positionDuServo1 = map(positionDuServo1, 0, 1023, 0, 180);
servo1.write(positionDuServo1);
}
