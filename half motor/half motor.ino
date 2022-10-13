#include<Servo.h>
Servo Myservo;
int pos;
#define echoPin 2;
#define trigPin 3;
long duration;
int distance;

void setup() {
  Myservo.attach (3);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicrosecond(2);
  digitalWrite(trigPin, HIGH);
  delayMicrosecond(10);
  digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = duration*0.034 / 2;
Serial.print("Distance: ";)
Serial.print(distance);
Serial.println(" cm";)
if(distance_cm)

}