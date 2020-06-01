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
  ctrl.setThrottle(3000, THROTTLE_NORMAL);
  delay(100);
  ctrl.setBrake(800, BRAKE_NORMAL);
  delay(100);
  ctrl.setReverser(DIRECTION_FORWARD);
  delay(100);
  ctrl.horn();
  delay(100);
  ctrl.engineStart();
  delay(100);
  ctrl.toggleSander(true);
  ctrl.toggleWipers(true);
  delay(2000);
  ctrl.toggleSander(false);
  ctrl.toggleWipers(false);
  delay(100);
  ctrl.setThrottle(0, THROTTLE_NORMAL);
  delay(100);
  ctrl.setBrake(0, BRAKE_NORMAL);
  delay(100);
  ctrl.togglePantograph();

}
