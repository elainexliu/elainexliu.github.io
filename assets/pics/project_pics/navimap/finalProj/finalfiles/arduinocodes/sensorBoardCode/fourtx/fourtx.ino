#include <util/delay.h>

#define CHARGEPIN1 2
#define READPIN1 3
#define CHARGEPIN2 1
#define READPIN2 0
#define CHARGEPIN3 8
#define READPIN3 9
#define CHARGEPIN4 7
#define READPIN4 6
#define settleDelay 100
#define chargeDelay 1

int reading1;
int reading2;
int reading3;
int reading4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
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
}

void loop() {
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
  /*
  Serial.print(reading1);
  Serial.print(",");
  Serial.print(reading2);
  Serial.print(",");
  Serial.print(reading3);
  Serial.print(",");
  Serial.print(reading4);
  Serial.println("");
  */
  if (reading1 < 1014){
    //Serial.println("");
    Serial.print("1");
  }
  else Serial.print("0");
  
  if (reading2 < 1011){
    Serial.print("1");
  }
  else Serial.print("0");
  
  if (reading3 < 1014){
    Serial.print("1");
  }
  else Serial.print("0");
  
  if (reading4 < 1015){
    Serial.print("1");
  }
  else Serial.print("0");
  Serial.println();
}
