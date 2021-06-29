#include <Arduino.h>
#include "BasicStepperDriver.h"


#define Feed_step 200
#define Bend_step 200
#define Feed_RPM 80
#define Bend_RPM 30


#define MICROSTEPS 16
int Delay = 50;

#define Bend_DIR 14
#define Bend_STEP 15
#define Feed_DIR 16
#define Feed_STEP 17
int val = 0;
int data = 0;
int a = 0;
int b = 0;
int c = 0;

BasicStepperDriver Feed_stepper(Feed_step, Feed_DIR, Feed_STEP);

BasicStepperDriver Bend_stepper(Bend_step, Bend_DIR, Bend_STEP);



void setup() {
  Serial.begin(9600);
    Feed_stepper.begin(Feed_RPM, MICROSTEPS);
    Bend_stepper.begin(Bend_RPM, MICROSTEPS);
    Serial.println("For Triangle enter (1,Side Length) ");
    Serial.println("For Square enter (2,Side Length) ");
    Serial.println("For Rectangle enter (3,Height,Length) ");
    Serial.println( "For Hexagon enter (4,Side Length) ");
    Serial.println( "For Spring enter (5,Spring Length) ");
    Serial.println( "**Note Enter value without bracket ");
}

void loop() {
  if (Serial.available()>0){

a = Serial.parseInt();
b = Serial.parseInt();
c = Serial.parseInt();
  }


if (a == 1){
  Serial.println("  ");
  Serial.print("Making Triangle of side Length "); 
  Serial.print(b);
  Serial.println("mm");
for (int x=0; x<3; x++){
  Serial.println("..");
  Feed_stepper.move(FEEDSTEPS*b*MICROSTEPS);
  delay(Delay);
  Bend_stepper.rotate(95);  
  delay(Delay);
  Bend_stepper.rotate(-95);
  }
  Feed_stepper.move(FEEDSTEPS*15*MICROSTEPS);
  Serial.println("Finish ");
  a = 0;
  b = 0;
}


  
if (a == 2){
  Serial.println("  ");
  Serial.print("Making Square of side Length "); 
  Serial.print(b);
  Serial.println("mm");
for (int x=0; x<4; x++){
  Serial.println("..");
  Feed_stepper.move(FEEDSTEPS*b*MICROSTEPS);
  delay(Delay);
  Bend_stepper.rotate(75);  
  delay(Delay);
  Bend_stepper.rotate(-75);
  }
  Feed_stepper.move(FEEDSTEPS*15*MICROSTEPS);
  Serial.println("Finish ");
  a = 0;
  b = 0;
}


if (a == 3){
  Serial.println("  ");
  Serial.print("Making Rectangle of  Length & Height "); 
  Serial.print(b);
  Serial.print(" & ");
  Serial.print(c);
  Serial.println(" mm");
  Serial.println("..");
 for (int x=0; x<2; x++){ 
  Feed_stepper.move(FEEDSTEPS*b*MICROSTEPS);
  delay(Delay);
  Bend_stepper.rotate(75);  
  delay(Delay);
  Bend_stepper.rotate(-75);
  delay(Delay);
  Feed_stepper.move(FEEDSTEPS*c*MICROSTEPS);
  delay(Delay);
  Bend_stepper.rotate(75);  
  delay(Delay);
  Bend_stepper.rotate(-75);
 }
 Feed_stepper.move(FEEDSTEPS*15*MICROSTEPS);
  Serial.println("Finish ");
  a = 0;
  b = 0;
}


if (a == 4){
  Serial.println("  ");
  Serial.print("Making Hexagon of Side Length "); 
  Serial.print(b);
  Serial.println("mm");
for (int x=0; x<5; x++){
  Serial.println("..");
  Feed_stepper.move(FEEDSTEPS*b*MICROSTEPS);
  delay(Delay);
  Bend_stepper.rotate(70);  
  delay(Delay);
  Bend_stepper.rotate(-70);
  }
  Feed_stepper.move(FEEDSTEPS*15*MICROSTEPS);
  Serial.println("Finish ");

a = 0;
  b = 0;
}



if (a == 5){
  Serial.println("  ");
  Serial.print("Making Spring of Length "); 
  Serial.print(b);
  Serial.println("mm");
for (int x=0; x<b*5; x++){
  Serial.println("..");
  Feed_stepper.move(360);
  delay(Delay);
  Bend_stepper.rotate(60);  
  delay(Delay);
  Bend_stepper.rotate(-60);
  }
  Feed_stepper.move(FEEDSTEPS*15*MICROSTEPS);
  Serial.println("Finish ");
  a = 0;
  b = 0;
}

}
