           
//#include <NewPing.h>
//#define TRIGGER_PIN  6
//#define ECHO_PIN     7
//#define MAX_DISTANCE 200
#define motorOne 13
#define motorTwo 12
#define motorBackOne 11
#define motorBackTwo 10
#define btnRight 2
#define btnLeft 3
#define btnForward 4
#define btnBack 5
//#define trig 6
//#define echo 7

int isRight = 0;
int isLeft = 0;
int isForward = 0;
int isBack = 0;
//NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup() {
  // put your setup code here, to run once:
  pinMode(motorOne, OUTPUT);
  pinMode(motorTwo, OUTPUT);
  pinMode( motorBackOne, OUTPUT);
  pinMode( motorBackTwo, OUTPUT);
  pinMode(btnRight, INPUT);
  pinMode(btnLeft, INPUT);
  pinMode(btnForward, INPUT);
  pinMode(btnBack, INPUT);
  
 // Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //delay(10);
  // Obtener medicion de tiempo de viaje del sonido y guardar en variable uS

  //Serial.println(distance);
  isLeft = digitalRead(btnLeft);
  isRight = digitalRead(btnRight);
  isForward = digitalRead(btnForward);
  isBack = digitalRead (btnBack);
 
    //distance = uS / US_ROUNDTRIP_CM;
  if (isLeft){
    digitalWrite(motorOne, HIGH);
    digitalWrite(motorTwo, LOW);
    digitalWrite(motorBackOne, LOW);
    digitalWrite(motorBackTwo, LOW);
  }else if (isRight){
    digitalWrite(motorOne, LOW);
    digitalWrite(motorTwo, HIGH);  
    digitalWrite(motorBackOne, LOW);
    digitalWrite(motorBackTwo, LOW);  
  }else if (isForward){
    digitalWrite(motorOne, HIGH);
    digitalWrite(motorTwo, HIGH);
    digitalWrite(motorBackOne, LOW);
    digitalWrite(motorBackTwo, LOW);
  }else  if (isBack){
    digitalWrite(motorOne, LOW);
    digitalWrite(motorTwo, LOW);
    digitalWrite(motorBackTwo, HIGH);
    digitalWrite(motorBackOne, HIGH);
  }else{
    digitalWrite(motorOne, LOW);
    digitalWrite(motorTwo, LOW);
    digitalWrite(motorBackOne, LOW);
    digitalWrite(motorBackTwo, LOW);
  }
//  if (isRight){
//    digitalWrite(motorTwo, HIGH);
//    digitalWrite(motorOne, LOW);
//  }else{
//    digitalWrite(motorTwo, LOW);
//    digitalWrite(motorOne, LOW);
//  }
//  if (isForward){
//
//      digitalWrite(motorOne, HIGH);
//      digitalWrite(motorTwo, HIGH);
//  }else{
//    digitalWrite(motorOne, LOW);
//    digitalWrite(motorTwo, LOW);
//  }
//
//  
//  if (isBack){
//    digitalWrite(motorTwo, HIGH);
//    digitalWrite(motorOne, HIGH);
//  }else{
//    digitalWrite(motorTwo, LOW);
//    digitalWrite(motorOne, LOW);
//  }
  delay(200);
}

void turnOn(int port){
   digitalWrite(port, HIGH);
}




