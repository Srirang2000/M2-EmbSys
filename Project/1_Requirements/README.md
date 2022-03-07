# EmbSys

# Obstacle detection using Ultrasonic sensor

## Abstract

* The capacity of a smart car to detect and classify an obstruction at various distances from it is critical to the system's design. An ultrasonic sensor is a very valuable sensor in the automation area. A mobile robot, for example, takes environmental data, turns it into a signal, and then performs the signalled duty of avoiding obstacles. This particular sensor provides satisfactory results at a reasonable price.

## High level requirements

| Requirements | Description |
| ----- | --------------------------- |
| HLR-1 | Arduino uno for working of circuit |
| HLR-2 | using LCD display to show the distance of the obstacle |
| HLR-3 | using buzzer for warning of the obstacle |
| HLR-4 | using  ultrasonic sensor to detect the obstacle by SONAR |


## low level requirements
| HLR | LLR | Description |
| --- | --- | ----------- |
| HLR-1 | LLR-1 | Receives data from the sensor |
|       | LLR-2 | Performs mathematical operations if any |
|       | LLR-3 | Sends data to the LCD display |
|       | LLR-4 | May warn with buzzer if the obstacle is within a particular distance |
| HLR-2 | LLR-1 | This LCD display shows the distance of the obstacle in centimeters or inches |
| HLR-3 | LLR-1 | This is a sound device that warns with a buzzer |
| HLR-4 | LLR-1 | HC-SR04 is a ultrasonic sensor which works using SONAR to detect obstacles |


### Sensor 

* Ultrasonic sensor HC-SR04

### Actuator

* Buzzer

## Components

| Compenent | Description |
| --------- | ----------- |
| Arduino Uno | The Arduino Uno is an open-source microcontroller board based on the Microchip ATmega328P microcontroller and developed by Arduino.cc.The board is equipped with sets of digital and analog input/output (I/O) pins that may be interfaced to various expansion boards and other circuits.The board has 14 digital I/O pins, 6 analog I/O pins, and is programmable with the Arduino IDE, via a type B USB cable |
| LCD display | A liquid-crystal display (LCD) is a flat-panel display that uses the light-modulating properties of liquid crystals combined with polarizers. Liquid crystals do not emit light directly,instead using a backlight or reflector to produce images in color or monochrome |
| HC-SR04 ultrasonic sensor |  the HC-SR04 Ultrasonic distance sensor consists of two ultrasonic transducers. The one acts as a transmitter which converts electrical signal into 40 KHz ultrasonic sound pulses. The sensor is small, easy to use in any robotics project and offers excellent non-contact range detection between 2 cm to 400 cm with an accuracy of 3mm. Since it operates on 5 volts, it can be hooked directly to an Arduino or any other 5V logic microcontrollers. |
| 220 ohm resistor |  | 
| Potentiometer | The potentiometer is a device that is used to measure the voltage or electric potential. It provides a variable resistance when the shaft of the device is turned. |
| 5V voltage source | Voltage source for the peripherals to work |
| Buzzer | It works as a actuator alerting the user |
| LED | LED can be used to display safe and danger signal .|

## Swot Analysis

### Strengths 

* It can be use din vehicles for obstacle detection
* It is a good system to avoid collisions

### opportunities

* can be used in vehicles for obstacle detection
* more peripherals can be added to show warning messages
* It can also be used in water level sensing in tanks

### Weaknesses

* If the device is not fast enough may cause accidents
* Different devices with more accurate detection may become a competition

### Threats

* Ultrasonic sensors cannot work in vaccum
* Sensing accuracy affected by soft materials

## 4 W's and 1 H

### Where is it used ?

* Vehicles for anti-collision system
* Used in Water tanks to check level

### What is the main advantage ?

* These sensors have a range of 1cm to 11 meters and
* They operate in a range of 40khz to 70khz

### Who will benefit ?

* In houses to stop excess water from filling ultrasonic sensorcan be used
* In vehicles for anti collision system 

### When can this be used ?

* In houses to stop excess water from filling ultrasonic sensorcan be used
* In vehicles for anti collision system 


## Applications

* Anti-Collision Detection.
* People Detection.
* Contouring or Profiling.
* Presence Detection.



