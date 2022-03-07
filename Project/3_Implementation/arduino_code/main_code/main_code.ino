#include<LiquidCrystal.h>
 
 #define echo 10
 #define trig 9
 #define outA 12                   // Red LED to indicate too close
 #define outB 8                 // Green LED to indicate that its at safe distance
 #define outC 11                // Buzzer to indicate too close

 float  duration;                    // time taken by the pulse to return back
 float  distance;                      // oneway distance travelled by the pulse
 const int intruderDistance = 25;          // the minimum distance upto which its safe 
  
 LiquidCrystal lcd(1,2,4,5,6,7);           //lcd(RS,EN,D4,D5,D6,D7) pins connectted on arduino uno
  
 void setup() 
 {
    pinMode(trig, OUTPUT);          // setting trig pin as OUTPUT, it receives a pulse from clock for a small duration
    pinMode(echo, INPUT);            // setting echo as INPUT
    
    pinMode(outA, OUTPUT);            // RED LED set to OUTPUT 
    digitalWrite(outA, LOW);         // initialize RED LED to be OFF
    
    pinMode(outB, OUTPUT);              // GREEN LED set to OUTPUT
    digitalWrite(outB, LOW);          // initialize RED LED to be OFF
    
    pinMode(outC, OUTPUT);              // Buzzer set as OUTPUT 
    digitalWrite(outC, LOW);            // Initialize buzzer to LOW
    
    Serial.begin(9600);              // Sets the data rate in bits per second(baud rate) for serial data transmission
    lcd.begin(16, 2);
 }
  
 void loop() 
 {
    time_Measurement();                          // Function call to time_measurement()
    distance = (float)duration * (0.0343) / 2;   // calculate the oneway distance travelled by the pulse
    Serial.println(distance);                    // Print distance to the serial port
    alarm_condition();                           // function call to alarm_condition
    display_distance();                          // function call to display distance on LCD
 }
  
 void time_Measurement()              // function to measure the time taken by the pulse to return back
 { 
    digitalWrite(trig, LOW);         // setting trig (pin 9) to 0V
    delayMicroseconds(2);            // pausing the program for 2us
  
    digitalWrite(trig, HIGH);        // setting trig (pin 9) to 5V
    delayMicroseconds(10);           // pausing the program for 10us
    
    digitalWrite(trig, LOW);         // setting trig (pin 9) to 0V
  
    duration = pulseIn(echo, HIGH);  // sends a US wave to measure time for the wave to come back from obstacle
 }
 
 void alarm_condition()              //function to execute the output commands based on the sensor input
 { 
    if(distance<=intruderDistance)     // checking if the distance is safe or not
    { 
      digitalWrite(outA,HIGH);       // giving a digital output for LED 
      digitalWrite(outB,LOW);
      analogWrite(outC,100);         // giving a audio output for buzzer
    }
    else
    {  digitalWrite(outA,LOW);       // giving a digital output for LED
       digitalWrite(outB,HIGH);
       analogWrite(outC,0);         // giving a audio output for buzzer
    }
 }

 void display_distance()           //function to display the distance on LCD/Serial Monitor
 { 
    lcd.clear();
    lcd.setCursor(0, 0);
    Serial.print("Distance in Cm: ");
    Serial.print(distance);
    Serial.println();
    lcd.print("Distance in Cm: ");
    lcd.setCursor(5, 1);
    lcd.print(distance);
    delay(1000);
  }
