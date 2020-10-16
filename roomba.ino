#define Trig 8
#define Echo 9
int ML1=4;                //for left motor
int ML2=5;
int MR1=6;               //for right motor
int MR2=7;
void setup() {
  pinMode(Trig,OUTPUT);
  pinMode(Echo,INPUT);
  pinMode(ML1,OUTPUT);
  pinMode(ML2,OUTPUT);
  pinMode(MR1,OUTPUT);
  pinMode(MR2,OUTPUT);
}
int Time;
int distance;
void loop() {
  digitalWrite(Trig,LOW);
  delayMicroseconds(2);
  digitalWrite(Trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig,LOW);
  Time=pulseIn(Echo,HIGH);
  distance=(Time*0.034)/2;
  if(distance>40)
  {digitalWrite(MR1,HIGH);      //forward motion
  digitalWrite(MR2,LOW);
  digitalWrite(ML1,HIGH);
  digitalWrite(ML2,LOW);
  }
  else
  {digitalWrite(MR1,LOW);      //right turn
  digitalWrite(MR2,HIGH);
  digitalWrite(ML1,HIGH);
  digitalWrite(ML2,LOW);
  
  }
  delay(50);
  
  

}
