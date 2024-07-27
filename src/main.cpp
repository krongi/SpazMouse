#include <Arduino.h>
#include <BleMouse.h>
#include <BleKeyboard.h>
#include <BLEDevice.h>
#include <math.h>

// put function declarations here:

BLEDevice bluedev;
BleMouse bmouse;
BleKeyboard bkey;



void setup() {
  // put your setup code here, to run once:
  bmouse.deviceName = "MX Vertical";
  bmouse.deviceManufacturer = "Logitech";
  Serial.begin(115200);
  Serial.println("Starting Mouse");
  bmouse.begin();
}

void loop() {
  int x = random(0, 4000);
  int y = random(0, 4000);
  // put your main code here, to run repeatedly:
  if(bmouse.isConnected()){
    bmouse.move(x, y);

  }

  delayMicroseconds(5000000);
  
}

// put function definitions here:
