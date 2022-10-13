const int LED = 13;
const int LED1 = 1;
void setup(){
  pinMode(LED,OUTPUT);
  pinMode(LED1,OUTPUT);
}
void loop(){
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED1,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
  delay(1000);                                        
  digitalWrite(LED1,LOW);
  delay(500);
}




