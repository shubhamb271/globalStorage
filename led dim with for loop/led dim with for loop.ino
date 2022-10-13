
const int ledPin=11;
const int pot = A0;

void setup() {
  pinMode (ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // int data = analogRead(POTENTIOMETER_PIN);
  // int volts = map(data, 0, 1023, 0, 254);
  
  // analogWrite(LED, volts);
  // delay(50);
int value = analogRead(pot);


for( int fadeValue = 0 ; fadeValue <= value; fadeValue += 5){
  analogWrite(ledPin, fadeValue);
  delay(30);
}

for(int fadeValue = value ; fadeValue>= 0; fadeValue -= 5){
  analogWrite(ledPin, fadeValue);
  delay(30);
}





  }


