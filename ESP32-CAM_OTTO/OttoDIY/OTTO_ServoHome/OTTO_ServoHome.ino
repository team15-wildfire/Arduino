//----------------------------------------------------------------
// 伺服馬達歸零程式
//-----------------------------------------------------------------
#include <LedMatrix.h>
#include <Servo.h> 
#include <Oscillator.h>
#include <EEPROM.h>
#include <BatReader.h>
#include <US.h>

//-- Otto Library
#include <Otto.h>
Otto Otto;  //This is Otto!

//---------------------------------------------------------
//-- First step: Configure the pins where the servos are attached
/*
         --------------- 
        |     O   O     |
        |---------------|
YR 3==> |               | <== YL 2
         --------------- 
            ||     ||
            ||     ||
RR 5==>   -----   ------  <== RL 4
         |-----   ------|
*/

  #define PIN_YL 2 //servo[0]
  #define PIN_YR 3 //servo[1]
  #define PIN_RL 4 //servo[2]
  #define PIN_RR 5 //servo[3]

///////////////////////////////////////////////////////////////////
//-- Global Variables -------------------------------------------//

///////////////////////////////////////////////////////////////////
//-- Setup ------------------------------------------------------//
///////////////////////////////////////////////////////////////////
void setup(){
  //Set the servo pins
  Otto.init(PIN_YL,PIN_YR,PIN_RL,PIN_RR,true);
}

///////////////////////////////////////////////////////////////////
//-- Principal Loop ---------------------------------------------//
///////////////////////////////////////////////////////////////////
void loop() {
  Otto.home();
}
