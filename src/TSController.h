// Copyright (c) Alessandro Felicetti. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

class TSController {
public:
  #define THROTTLE_NORMAL 1
  #define THROTTLE_REDUCED 2
  #define THROTTLE_MINIMAL 3
  #define BRAKE_NORMAL 1
  #define BRAKE_EXTENDED 2
  #define DIRECTION_FORWARD 1
  #define DIRECTION_REVERSE 2

  int begin();

  void setThrottle(int speed, int mode);
  void setBrake(int brake, int mode);
  void setReverser(int direction);
  void horn();
  void engineStart();
  void toggleSander();
  void toggleWipers();
  void togglePantograph();

private:
    int ACCprev = 0;
    int BRAKEprev = 0;
};


