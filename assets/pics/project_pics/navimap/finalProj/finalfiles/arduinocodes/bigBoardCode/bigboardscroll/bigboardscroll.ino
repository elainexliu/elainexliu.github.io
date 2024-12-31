#include <SoftwareSerial.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <util/delay.h>

#define CHARGEPIN1 13
#define READPIN1 14
#define CHARGEPIN2 15
#define READPIN2 16
#define CHARGEPIN3 2
#define READPIN3 3
#define CHARGEPIN4 4
#define READPIN4 5
#define settleDelay 100
#define chargeDelay 1

SoftwareSerial mySerial1(1, 0); // RX, TX
String readFour = "";
int count = 0;
String sensors = "";

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  //serial setup
  // Open serial communications and wait for port to open:
  Serial.begin(57600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  mySerial1.begin(9600);

  //sensor setup
  pinMode(CHARGEPIN1, OUTPUT);
  digitalWrite(CHARGEPIN1, LOW);
  pinMode(READPIN1, INPUT);
  pinMode(CHARGEPIN2, OUTPUT);
  digitalWrite(CHARGEPIN2, LOW);
  pinMode(READPIN2, INPUT);
  pinMode(CHARGEPIN3, OUTPUT);
  digitalWrite(CHARGEPIN3, LOW);
  pinMode(READPIN3, INPUT);
  pinMode(CHARGEPIN4, OUTPUT);
  digitalWrite(CHARGEPIN4, LOW);
  pinMode(READPIN4, INPUT);
  
  // lcd setup
  lcd.begin();
  lcd.backlight();
}

void loop() { // run over and over
  sensors += readsensors(); // first four sensors
  mySerial1.listen();
  while (mySerial1.available() > 0){
     char c = mySerial1.read();
     readFour += c;
     count++;
     if (count == 4){
       count = 0;
     }
     if (c == 13){
       sensors += readFour;
       Serial.println(sensors);
       parsesensors(sensors);
       readFour = "";
       mySerial1.stopListening();
     }
  }
  sensors = "";
}

String readsensors(){
  String ownSensor = "";
  int reading1;
  int reading2;
  int reading3;
  int reading4;
  //settle, charge, and wait
  delay(settleDelay);        
  digitalWrite(CHARGEPIN1, HIGH);
  digitalWrite(CHARGEPIN2, HIGH);
  digitalWrite(CHARGEPIN3, HIGH);
  digitalWrite(CHARGEPIN4, HIGH);
  delay(chargeDelay);
  reading4 = analogRead(READPIN4);
  reading1 = analogRead(READPIN1);
  reading3 = analogRead(READPIN3);
  reading2 = analogRead(READPIN2);
  //send result
  /* for debugging and calibrating the sensors
  Serial.print(reading1);
  Serial.print(",");
  Serial.print(reading2);
  Serial.print(",");
  Serial.print(reading3);
  Serial.print(",");
  Serial.print(reading4);
  Serial.println("");
  */
  if (reading1 < 1013){
    //Serial.println("");
    ownSensor += "1";
  }
  else ownSensor += "0";
  
  if (reading2 < 1013){
    ownSensor += "1";
  }
  else ownSensor += "0";
  
  if (reading3 < 1013){
    ownSensor += "1";
  }
  else ownSensor += "0";
  
  if (reading4 < 1013){
    //Serial.println("");
    ownSensor += "1";
  }
  else ownSensor += "0";
  return ownSensor;
}

void lcdwrite(String str){
  int startint = abs((16-str.length())/2);
  lcd.setCursor(startint, 0);
  // print from 0 to 9:
  for (int i =0; i < str.length(); i++){
    lcd.print(str.substring(i, i+1));
    delay(150);
  }
  delay(1000);
  //if you want the scroll effect:
//  delay(400);
//  // set the cursor to (16,1):
//  lcd.setCursor(16, 1);
//  // set the display to automatically scroll:
//  lcd.autoscroll();
//  // print from 0 to 9:
//  for (int i = 0; i < str.length(); i++) {
//    lcd.print(str.substring(i,i+1));
//    delay(300);
//  }
//  // turn off automatic scrolling
//  lcd.noAutoscroll();
}

void parsesensors(String sensor){
  if (sensor.substring(0,1).equals("1")){
    lcd.clear();
    lcdwrite("North America");
  }
  if (sensor.substring(1,2).equals("1")){
    lcd.clear();
    lcdwrite("South America");
  }
  if (sensor.substring(2,3).equals("1")){
    lcd.clear();
    lcdwrite("Africa");
  }
  if (sensor.substring(3,4).equals("1")){
    lcd.clear();
    lcdwrite("Antarctica");
  }
  if (sensors.substring(4,5).equals("1")){
    lcd.clear();
    lcdwrite("Australia");
  }
  if (sensors.substring(5,6).equals("1")){
    lcd.clear();
    lcdwrite("Asia");
  }
  if (sensors.substring(6,7).equals("1")){
    lcd.clear();
    lcdwrite("Europe");
  }
}
