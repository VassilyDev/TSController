// Copyright (c) Alessandro Felicetti. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include "Keyboard.h"
#include "TSController.h"


int TSController::begin(){
    Keyboard.begin();
}

void TSController::setThrottle(int n, int mode){
    int speed = 0;
    if ((n > 4000) || (n < 0)) return;
    if (mode == 1) {
        speed = map(n, 0, 4000, 0, 4000);
    }
    else if (mode = 2) {
        speed = map(n, 0, 4000, 0, 2000);
    }
    else {
        return;
    }
    if (speed > ACCprev) {
        int del = (speed - ACCprev);
        Keyboard.press('a');
        delay(del);
        Keyboard.releaseAll();
    }
    if (speed < ACCprev) {
        int del = (ACCprev - speed);
        Keyboard.press('d');
        delay(del);
        Keyboard.releaseAll();
    }
    if ((speed < 50) && (ACCprev > 50)) {
        int del = 50;
        Keyboard.press('d');
        delay(del);
        Keyboard.releaseAll();
    }
    ACCprev = speed;
}

void TSController::setBrake(int n, int mode) {
    int brake = 0;
    if ((n > 1000) || (n < 0)) return;
    if (mode == 1) {
        brake = map(n, 0, 1000, 0, 1000);
    }
    else if (mode = 2) {
        brake = map(n, 0, 1000, 0, 2000);
    }
    else {
        return;
    }
    if (brake > BRAKEprev) {
        int del = (brake - BRAKEprev);
        Keyboard.press('\'');
        delay(del);
        Keyboard.releaseAll();
    }
    if (brake < BRAKEprev) {
        int del = (BRAKEprev - brake);
        Keyboard.press(';');
        delay(del);
        Keyboard.releaseAll();
    }
    if ((brake < 50) && (BRAKEprev > 50)) {
        int del = 50;
        Keyboard.press(';');
        delay(del);
        Keyboard.releaseAll();
    }
    BRAKEprev = brake;
}

void TSController::setReverser(int direction) {
    if (direction == 1) {
        Keyboard.press('w');
        delay(1000);
        Keyboard.releaseAll();
    }
    else if (direction = 2) {
        Keyboard.press('d');
        delay(1000);
        Keyboard.releaseAll();
    }
    else {
        return;
    }
}

void TSController::horn() {
    Keyboard.press(' ');
    delay(400);
    Keyboard.releaseAll();
}

void TSController::engineStart() {
    Keyboard.press('z');
    delay(400);
    Keyboard.releaseAll();
}

void TSController::toggleSander() {
        Keyboard.press('x');
        delay(400);
        Keyboard.releaseAll();
}

void TSController::toggleWipers() {
        Keyboard.press('v');
        delay(400);
        Keyboard.releaseAll();
}

void TSController::togglePantograph() {
        Keyboard.press('p');
        delay(400);
        Keyboard.releaseAll();
}

