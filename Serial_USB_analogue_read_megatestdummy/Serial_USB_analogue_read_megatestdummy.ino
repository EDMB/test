/*
  Adding Strings together
  
  Atmega 1280 mega 2560

 Examples of how to add strings together
 You can also add several different data types to string, as shown here:

 created 27 July 2010
 modified 2 Apr 2012
 by Tom Igoe

 http://www.arduino.cc/en/Tutorial/StringAdditionOperator

 This example code is in the public domain.
 */

// declare three strings:
String stringOne, stringTwo, stringThree;

void setup() {
  // initialize serial and wait for port to open:
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  stringOne = String("stringThree = ");
  stringTwo = String("this string");
  stringThree = String();
  // send an intro:
  //Serial.println("\n\nAdding strings together (concatenation):");
  //Serial.println();
}

void loop() {

  // adding a variable integer to a string:
  int sensorValue00 = 12802560;
  int sensorValue0 = 1024; //analogRead(A0);
  int sensorValue1 = 1023; //analogRead(A1);
  int sensorValue2 = 1022; //analogRead(A2);
  int sensorValue3 = 1021; //analogRead(A3);
  int sensorValue4 = 1020; //analogRead(A4);
  int sensorValue5 = 1019; //analogRead(A5);
  int sensorValue6 = 1018; //analogRead(A6);
  int sensorValue7 = 1017; //analogRead(A7);
 
  stringOne = "";
  stringThree =  stringOne + sensorValue00 + "-" +sensorValue0 + "-" + sensorValue1 + "-" + sensorValue2 + "-" + sensorValue3 + "-" + sensorValue4 + "-" + sensorValue5 + "-" + sensorValue6 + "-" + sensorValue7;
  Serial.println(stringThree);    // prints "Sensor Value: 12802560-401-..." or whatever value analogRead(A0) has

//Serial.println (" ");
delay (10000);

  // do nothing while true:
  //while (true);
}
