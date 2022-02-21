# M2-EmbSys

# Digital Temperature sensor

### High level requirements

* Detect the Room Temperature 
* Display temperature in Digital format on LCD or 7-segement Display
* Convert temperature detected from analog to digital

### low level requirements

* Use LM-35 to detect temperature
* detect temperature in analog format
* use ADC0804 for analog to digital conversion


### Components

* AT89C51 (8051 Microcontroller) : The AT89C51 is an 8-bit microcontroller from the Atmel family. It uses the popular 8051 architecture, which is why most novices use it nowadays. It's a 40-pin IC with a 4-kilobyte flash memory. It has four ports that provide a total of 32 programmable GPIO pins. It has no built-in ADC module and solely supports USART connection.
* 11.0592 MHz Cystal : Used to provide clock pulses
* 16X2 LCD Display : The term LCD stands for liquid crystal display. It is one kind of electronic display module used in an extensive range of applications like various circuits & devices like mobile phones, calculators, computers, TV sets, etc.
* ADC0804 : ADC0804 is an 8-bit analog to digital converter IC which can measure up to 8 analog input simultaneously. That means the digital output value can vary between 0 to 255. It uses a successive approximation converter which is based on the differential potentiometric ladder.
* LM35 : The LM35 series are precision integrated-circuit temperature sensors, whose output voltage is linearly proportional to the Celsius (Centigrade) temperature.The LM35 is rated to operate over a −55˚ to +150˚C temperature range
* Power Supply : Input Power Voltage source for the working of Temperature sensor.
* Connecting Wires : Wires to complete the circuit 

### Applications 

* Motors 
* Home appliances
* Computers
* Exhaust Gas monitoring on Motorsport vehicles

# Basic Calculator

### High level requirements

* Include "Equal to" button
* Include decimal point to operate on floating values
* Include all basic arithmetic operations
* Include ON/OFF button

### Low level requirements

* Include Clear screen button
* On pressing "Equal to" result will be displayed
* by pressing ON/OFF button twice screen will be cleared

### components

* Button switch : For turning on or off the device.
* 4*4 keyboard matrix : The 4 x 4 Matrix Keypad Module is a non-encoded matrix keypad consisting of 16 keys in parallel. The keys of each row and column are connected through the pins outside – pin R1-R4 as labeled beside control the rows, when L1-L4, the columns
* 16x2 LCD display : The term LCD stands for liquid crystal display. It is one kind of electronic display module used in an extensive range of applications like various circuits & devices like mobile phones, calculators, computers, TV sets, etc.
* oscillator : For generation of clock pulses 
* resistors ,capacitors
* voltage regulator : To maintain a circuit that creates and maintains a fixed output voltage, irrespective of the changes to the input voltage
* jumper wires : To complete the connections between components


### Applications

* Simple calculators for basic arithmetic operations
* Financial Calculators 
* Scientific calculators for Engineering Applications 



