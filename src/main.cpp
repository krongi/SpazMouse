#include <Arduino.h>
#include <BleMouse.h>


// put function declarations here:

BleMouse bmouse;

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
  int delay = random(1000000, 10000000);
  delayMicroseconds(delay);
  
}

// put function definitions here:
