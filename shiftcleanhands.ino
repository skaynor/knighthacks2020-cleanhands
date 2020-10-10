/*
#include "SevSegShift.h" //Heavily dependent on this library built for managing the 7 segment display
                         //https://github.com/bridystone/SevSegShift

#define SHIFT_PIN_DS   8 
#define SHIFT_PIN_STCP 7 
#define SHIFT_PIN_SHCP 6 

SevSegShift sevsegshift(SHIFT_PIN_DS, SHIFT_PIN_SHCP, SHIFT_PIN_STCP, 1, true); //Instantiate a seven segment controller object (with Shift Register functionality)

// Definition of other variables and components
int countdown = 5;
unsigned long timer = 0;
unsigned long lastTime = 0;
byte ledPin1 = 0;
byte ledPin2 = 1;


void setup() {
  // All variables for the sevseg object
  byte numDigits = 4; 
  byte digitPins[] = {9, 10, 11, 12};
  byte segmentPins[] = {0, 2, 4, 6, 7, 1, 3, 5};
  bool resistorsOnSegments = 0;
  bool updateWithDelays = false;
  bool leadingZeros = false;
  bool disableDecPoint = true; 
  
  // Start the sevseg object's function
  sevsegshift.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments, updateWithDelays, leadingZeros, disableDecPoint);
  sevsegshift.setBrightness(90);
  
  // Declare other components
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
}

    
void loop() {
  while (countdown > 0){
    sevsegshift.setNumber(countdown, 0);
    sevsegshift.refreshDisplay();
    timer = millis();
    if (timer - lastTime > 1000){
      lastTime = timer;
      countdown--;
    }
  }
  sevsegshift.setChars("done");
  sevsegshift.refreshDisplay();
  
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
}
*/
