/*#include "SevSeg.h" //Heavily dependent on this library built for managing the 7 segment display
SevSeg sevseg;      //https://github.com/DeanIsMe/SevSeg

// Definition of other variables and components
int countdown = 5;
unsigned long timer = 0;
unsigned long lastTime = 0;
byte ledPin1 = 0;
byte ledPin2 = 1;


void setup() {
  // All variables for the sevseg object
  byte numDigits = 4; 
  byte digitPins[] = {2, 3, 4, 5};
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
  bool resistorsOnSegments = 0;
  bool updateWithDelays = false;
  bool leadingZeros = false;
  bool disableDecPoint = true; 
  
  // Start the sevseg object's function
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments, updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(90);
  
  // Declare other components
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
}

    
void loop() {
  while (countdown > 0){
    sevseg.setNumber(countdown, 0);
    sevseg.refreshDisplay();
    timer = millis();
    if (timer - lastTime > 1000){
      lastTime = timer;
      countdown--;
    }
  }
  sevseg.setChars("done");
  sevseg.refreshDisplay();
  
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
}
*/
