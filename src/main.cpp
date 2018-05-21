#include<LSM9DS1.h>

LSM9DS1* lsm9ds1;

// Pin definitions
int intPin = 15;  // These can be changed, 2 and 3 are the Arduinos ext int pins
int myLed  = 13;


void setup()
{
  Serial.begin(38400);
	Wire.begin();
  lsm9ds1 = new LSM9DS1();

  // Set up the interrupt pin, its set as active high, push-pull
  //pinMode(intPin, INPUT);
  //pinMode(myLed, OUTPUT);
  //digitalWrite(myLed, HIGH);
}

void loop()
{
  lsm9ds1->capture();
 
}
