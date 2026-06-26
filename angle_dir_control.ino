// angle control

void setup() {
pinMode(2,OUTPUT); //step
pinMode(3,OUTPUT); //dir
Serial.begin(9600);
}

void loop() {
  // FULL STEP MODE - 1.8 degrees per step
  
 if (Serial.available()){ 

  int dir = Serial.parseInt();
  if (dir ==1 )
  digitalWrite(3,HIGH); //cw
if (dir == -1)
digitalWrite(3,LOW);
 
int angle = Serial.parseInt();
 Serial.println(angle);
 int steps = angle/1.8;
  for(int i =0; i<steps ; i++)
  {
    digitalWrite(2,HIGH);
    delay(20);
    digitalWrite(2,LOW);
    delay(20);

  }
 }
  delay(3000);
 
}
