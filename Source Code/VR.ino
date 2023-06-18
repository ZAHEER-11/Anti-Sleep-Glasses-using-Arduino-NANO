int Sinput=A4;
int buzzer=6;
void setup(){
pinMode(Sinput,INPUT);
pinMode(buzzer,OUTPUT);
}
void loop(){
  if(digitalRead(Sinput)==LOW)
  {
    delay(3500);
    digitalWrite(buzzer, HIGH);
  }
  else
  {
  if(digitalRead(Sinput)==HIGH)
  {
  digitalWrite(buzzer, LOW);
  }
 }
}
