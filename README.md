# DIY-Arduino-based-2D-wire-bending-machine
![image](https://user-images.githubusercontent.com/19898602/123724539-23b47100-d8aa-11eb-927f-07af6ffecc3c.png)


Hello guys here I have build DIY Arduino based 2D wire bending machine, using some stepper motors, 
and 3D printed parts.


I have use arduino nano for this project, this machine can shape wire in some 2D geometrical figures.
I have write code for some 5 basic shapes like, Triangle, Square, Rectangle, Hexagon & spiral.
What shape and size you want to bend can be define from serial monitor.


In this way it became very flexible and user friendly, don’t need to upload new code for new shape.
More complex shape can also possible, for that we need to write code and upload to arduino.


This DIY Arduino based 2D wire bending machine is fun to build on your own, if you are students this will be good project for your academic project.

# COMPONENT REQUIRED

Followings are the major components require to build DIY Arduino based 2D wire bending machine


> Arduino nano — 1 no.

> Nema 17 stepper motor — 2 nos.

> A4988 stepper driver module — 2 nos.

> Filament feeder — 1 nos.

> 3D printed parts

> 1 Sqmm brass wire

> 3mm bearing 693ZZ — 5 nos.

> M4 nuts and bolts for mounting


# CIRCUIT DIAGRAM

![image](https://user-images.githubusercontent.com/19898602/123724744-7f7efa00-d8aa-11eb-91f7-e7e355882e07.png)


Refer the above circuit diagram to do wiring, I have use 12V 2A external power supply to power arduino and stepper motor.
A4988 driver module is use to operate Nema17 stepper motor, 

if your stepper motor get unstable or moving some random steps during start up so you can connect step pin and GND pin with 1K ohm resistor.

Bender motor direction pin is connected with - A0 pin of arduino

Bender motor step pin is connected with - A1 pin of arduino 

Feeder motor direction pin is connected with - A2 pin of arduino 

Feeder motor step pin is connected with - A3 pin of arduino

A4988 Stepper driver is set at 16 microstepping setting by giving 5V to MAS1 MS2 & MS3 pin of driver


# PCB

![FTQFHXZKLBNXU2X](https://user-images.githubusercontent.com/19898602/123725479-bd305280-d8ab-11eb-8709-c680e91e1300.jpg)
![MVI_0001_2 mp4 00_06_55_14 Still001](https://user-images.githubusercontent.com/19898602/123725534-d5a06d00-d8ab-11eb-9645-d2a05880e79a.jpg)
![MVI_0001_2 mp4 00_07_11_00 Still002](https://user-images.githubusercontent.com/19898602/123725542-d933f400-d8ab-11eb-9a7f-d88351d6a952.jpg)

I designe this multipurpose PCB Those who ever worked with arduino they know the pain of connecting multiple components to the arduino for there projects. so here is the answer for you all.

Not only 2 or 3 you can connect 11 components at same time & on board 5V & 9V regulator,

cross polarity protection, power indication LED,

motor power selection provision (5V or 9V or 12V) manual provision for stepper motor microstepping setting.

Wide range of input supply (9V to 24V). This is my multipurpose PCB works with Arduino Nano, I have designed it in a way that you can run 2 Stepper motors, 2 DC motors, 2 Servo motors at same time and this is not it you can even connect BT module, rotary encoder, I2C device, potentiometer at same time.

This PCB is very much helpful in building any project and no need to worry about messy wire connections.

![image](https://user-images.githubusercontent.com/19898602/123725769-50698800-d8ac-11eb-83b0-fbdab6a23ec1.png)
![image](https://user-images.githubusercontent.com/19898602/123725784-5a8b8680-d8ac-11eb-9a51-bb9042d974ec.png)


He we first see the overview of PCB means what is this PCB capable of and which components you can connect to the PCB.

# List of the Components you can connect to the PCB

> 2 DC motor ( 9V to 24V DC)

> 2 Potentiometer

> 2 Servo motors ( 5V to 9V DC)

> 1 Serial device (BT module, HMI, Communication module, RX, TX)

> 1 Encoder (2 interrupt pin & 1 PB pin)

> 1 I2C device (SCL/SDA Device, display, MPU6050 etc)

> 2 Stepper motors


# Special features of PCB

> Wide range of power input 9V to 24V DC

> Cross polarity protection

> DC motor voltage selection 9V or 12 V DC

> Servo motor voltage selection 5V or 9V DC

> Manual microstepping setting for stepper motor

> Power indication LED

> L298N IC for heavier DC motor

> ON board 5V and 9V regulator no need to arrange different power sources

> Header pins and screw terminals for easy connections




I have designe this PCB and order it from [JLCPCB.com](https://jlcpcb.com/IAT)

I always prefer [JLCPCB.com](https://jlcpcb.com/IAT) for my PCB needs, [JLCPCB.com](https://jlcpcb.com/IAT) have best deals for their customers
$2 for 1-4 Layer PCBs, free SMT assembly monthly.


and this is not it if you are new customer for [JLCPCB.com](https://jlcpcb.com/IAT) you will get 18$ coupon on your
first registration to their site its limited period offer so what are waiting for go  and get your benefit. 


[Click here to visit JLCPCB.com](https://jlcpcb.com/IAT)











