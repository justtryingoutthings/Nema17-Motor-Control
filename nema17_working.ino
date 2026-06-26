void setup() {
pinMode(2,OUTPUT); //step
pinMode(3,OUTPUT); //direction
}

void loop() {
digitalWrite(3,HIGH); //cw rotation

for (int i =0; i<200 ; i++) //change the number of steps for microstepping configuration
{
digitalWrite(2,HIGH);
delay(20);
digitalWrite(2,LOW);
delay(20);
}
delay (3000);
}
