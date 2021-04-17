#include <SoftwareSerial.h>
#include <AccelStepper.h>

const uint8_t stepPulse = 11;
const uint8_t stepDir = 12;
const uint8_t stepEnable = 7;

AccelStepper stepper(AccelStepper::DRIVER, stepPulse, stepDir);

SoftwareSerial ss(2,3); //RX, TX

void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  digitalWrite(10,LOW);

  pinMode(A0, INPUT_PULLUP);

  pinMode(7, OUTPUT);
  digitalWrite(7, HIGH);
  stepper.setEnablePin(6);

  ss.begin(57600);
  Serial.begin(9600);

  stepper.setMaxSpeed(7000);
  stepper.setAcceleration(10000);
  stepper.setCurrentPosition(0);
}

long dt = 0;
bool dd = true;

char inByte;
int pos = 0;

bool go = false;
bool zero = false;
bool man = false;

void loop() {
  // put your main code here, to run repeatedly:
  if (ss.available()) {
    inByte = ss.read();
    if (inByte == 's') {
      pos = ss.parseInt();
      go = true;
    }
    else if (inByte == 'e') {
      go = false;
      Serial.println("FINE");
    }
    else if (inByte == 'f') {
      zero = true;
      Serial.println("ZERO");
    }
    else if (inByte == 'm') {
      man = true;
      Serial.println("TEST");
    }
  }


  if (go) { 
    stepper.moveTo(pos/2);
    stepper.run();
  }
  else {
    if (zero) {
      while (digitalRead(A0)) {
        stepper.move(-1);
        stepper.run();
      }
      stepper.setCurrentPosition(0);
      zero = false;
    }
    else if (man) {
      stepper.moveTo(900);
      while (stepper.distanceToGo() != 0) {
        stepper.run();
      }
      stepper.moveTo(0);
      while (stepper.distanceToGo() != 0) {
        stepper.run();
      }
      man = false;
    }
  }
    
}
