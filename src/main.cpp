#include <Arduino.h>
#include <BleMouse.h>
#include <BleKeyboard.h>
// #include <BLEScan.h>
#include <BLEDevice.h>
#include <math.h>

// put function declarations here:

BLEDevice bluedev;
BleMouse bmouse;
BleKeyboard bkey;



void setup() {
  // put your setup code here, to run once:
  // bluedev.getScan();
  // bluedev.getScan();
  int rando = rand();
  Serial.print(rando);
  bmouse.deviceName = "MX Vertical";
  bmouse.deviceManufacturer = "Logitech";
  // bkey.setName("Long Dick Keyboard");
  Serial.begin(115200);
  Serial.println("Starting Mouse");
  
  // bkey.begin();
  bmouse.begin();
}

void loop() {
  int x = random(0, 4000);
  int y = random(0, 4000);
  // put your main code here, to run repeatedly:
  if(bmouse.isConnected()){
    Serial.println("Working");
    bmouse.move(x, y);
    Serial.print("Mouse moved to ");
    Serial.print(x);
    Serial.print(", ");
    Serial.println(y);
  }
  if(bkey.isConnected()){
    Serial.println("Keybaord connected you dumb fuck");
  }
  Serial.println("Begin 5 Second Wait");
  
  delayMicroseconds(5000000);
  
}

// put function definitions here:
