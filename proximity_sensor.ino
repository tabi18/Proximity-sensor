#define ECHOPIN 10
#define TRIGPIN 11
void setup() {
Serial.begin(9600);
pinMode(ECHOPIN,INPUT);
pinMode(TRIGPIN,OUTPUT);
pinMode(5,OUTPUT);
}
void loop() {
digitalWrite(TRIGPIN,LOW);
delayMicroseconds(2);
digitalWrite(TRIGPIN,HIGH);
delayMicroseconds(10);
digitalWrite(TRIGPIN,LOW);
float duration=pulseIn(ECHOPIN,HIGH);
float distance=duration/58;
if(distance<341){
  tone(5,4000);
}
else{
  noTone(5);
}
Serial.println(distance);
delay(200);
}
