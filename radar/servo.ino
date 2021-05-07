#include <Servo.h> 

Servo myservo;  

void setup() {
  
  myservo.attach(9);   
  pinMode(5, INPUT);
  
}

void loop() {

  if (digitalRead(5)) {
    myservo.write(90); 
  }
  else {
    myservo.write(0);
  }

  delay(50);
}
