int proximity=7;
int buzzer=6;
void setup() {
  pinMode(proximity,INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  int data=digitalRead(proximity);
  if(data==0)
  {
    
    digitalWrite(buzzer,HIGH);     
Serial.println("no Obsctale");
  }
  else
  {
    digitalWrite(buzzer,LOW);
     Serial.println("obsctale");
  }
 
}
