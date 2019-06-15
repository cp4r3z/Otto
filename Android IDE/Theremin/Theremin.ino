#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

#include <Servo.h>
#include <EEPROM.h>
 #include "Otto.h"

double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
Otto Ottobot;



void setup(){
    Ottobot.defaultInit();
    Ottobot.sing(0);
    
}

void loop(){
    
    while(!((Ottobot.getDistance()) < (50)))
    {
        _loop();
    }
    Ottobot.move(0,500,5);
    if(((0) < (Ottobot.getDistance())) && ((Ottobot.getDistance()) <= (10))){
        Ottobot._playNote(1047,1000);
        Ottobot.move(10,1000,20);
    }
    if(((10) < (Ottobot.getDistance())) && ((Ottobot.getDistance()) <= (15))){
        Ottobot._playNote(523,250);
    }
    if(((15) < (Ottobot.getDistance())) && ((Ottobot.getDistance()) <= (20))){
        Ottobot._playNote(494,125);
    }
    if(((20) < (Ottobot.getDistance())) && ((Ottobot.getDistance()) <= (25))){
        Ottobot._playNote(440,125);
    }
    if(((25) < (Ottobot.getDistance())) && ((Ottobot.getDistance()) <= (30))){
        Ottobot._playNote(392,125);
    }
    if(((30) < (Ottobot.getDistance())) && ((Ottobot.getDistance()) <= (35))){
        Ottobot._playNote(349,125);
    }
    if(((35) < (Ottobot.getDistance())) && ((Ottobot.getDistance()) <= (40))){
        Ottobot._playNote(330,125);
    }
    if(((40) < (Ottobot.getDistance())) && ((Ottobot.getDistance()) <= (45))){
        Ottobot._playNote(294,125);
    }
    if(((45) < (Ottobot.getDistance())) && ((Ottobot.getDistance()) < (50))){
        Ottobot._playNote(262,250);
    }
    
    _loop();
}

void _delay(float seconds){
    long endTime = millis() + seconds * 1000;
    while(millis() < endTime)_loop();
}

void _loop(){
    
}

