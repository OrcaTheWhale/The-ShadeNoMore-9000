#include <Arduino.h>
#include <Servo.h>
const int receiverpin = 6;
const int ServoPin = 4;
Servo myServo;

bool closed = true;
bool bounce = false;

int maxangle = 90; // Change to reduce stall

void wake() { // Interrupt function, wakes up the microcontroller
  wakeup();
}

void setup() {
  // put your setup code here, to run once:
  //_bis_SR_register(LPM1_bits); // Sleep mode?
  pinMode(receiverpin, INPUT);
  myServo.attach(ServoPin);
  attachInterrupt(receiverpin, wake, FALLING); // When the receiverpin goes LOW, wake function is called. The IR receiver outputs LOW when it receives a signal.
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(receiverpin);
  if (val == LOW && bounce == false) { // Bounce so it happens only once per time the receiverpin is HIGH
    bounce = true;
    if (closed) {
      for (int i = 0; i < maxangle; i++) { // Move slowly
      myServo.write(i);
      if (val == LOW) { // Cancel the movement if interrupted
        break;
      }
      delay(10);
    }
    closed = false;
    } else if (!closed) {
      for (int i = maxangle; i > 0; i--) { // Move slowly
        myServo.write(i);
        if (val == LOW) { // Cancel the movement if interrupted
          break;
        }
        delay(10);
        closed = true;
      }
    }
    
    
  } else if (val == HIGH) {
    bounce = false;
  }
  suspend(); // Sleep the microcontroller
}

// put function definitions here:
