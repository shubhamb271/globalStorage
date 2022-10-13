const int ledPin=13;
const int ldrPin=Aj0;

void setup() {
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
pinMode(ldrPin,INPUT);
}

void loop() {
int ldrStatus=analogRead(ldrPin);
if (ldrStatus>=200){
digitalWrite(ledPin,HIGH);
Serial.print("It's dark, turn on the LED ");
Serial.println(ldrStatus);
}
else{
digitalWrite(ledPin,LOW);
Serial.print("It's bright, turn off the LED");
Serial.println(ldrStatus);
}
}
