/*  TSController library by Alessandro Felicetti http://https://felicetti-a.eu/
   GitHub source code and documentation https://github.com/VassilyDev/TSControl
*/

#include "TSController.h"

TSController ctrl;

void setup() {
  ctrl.begin();
  delay(5000);
}

void loop() {
  // Read the analog value from pin A0. setThrottle accepts range 0-4000.
  int readSpeed = map(analogRead(A0), 0, 1024, 0, 4000);
  ctrl.setThrottle(readSpeed, THROTTLE_NORMAL);

  // Read the analog value from pin A1. setBrake accepts range 0-1000.
  int readBrake = map(analogRead(A1), 0, 1024, 0, 1000);
  ctrl.setBrake(readBrake, BRAKE_NORMAL);
  delay(200);
}
