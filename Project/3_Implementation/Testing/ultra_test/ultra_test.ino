#include<LiquidCrystal.h>

#define trigPin 9
#define echoPin 10
                                  // defines variables
float duration;
float distance;

LiquidCrystal lcd(1,2,4,5,6,7); 

void setup() 
{
  pinMode(trigPin, OUTPUT);         // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);          // Sets the echoPin as an Input
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() 
{
                                       // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
                                       // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
                                          // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
                                          // Calculating the distance
  distance = (float)duration * (0.034)/2;
  Serial.println(distance);                  // Prints the distance on the Serial Monitor
  display_distance();
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
