import processing.serial.*; //imcludes the serial object library

Serial port;  // creates local serial object from Serial library
int maxPinInput = 1023; // maximum value read from sensor
float myVal; // float storing converted ascii serial data
String myString; // variable to collect serial data
PImage italyschool;
PImage soamschool;
PImage franceschool;
PImage hiltonschool;
PImage asiaschool;
PImage germanyschool;
PImage hiltonschoolg;
PImage cls;

void setup() {
  size(600, 400); //size of the sketch
  String portName = Serial.list()[0]; // COM3 was listed as the first port on Arduino (index 0)
  port = new Serial(this, portName, 57600); //instantiating the serial monitor (baud rate must match)
  italyschool = loadImage("italyschool.jpg");
  soamschool = loadImage("soamschool.jpg");
  franceschool = loadImage("franceschool.jpg");
  hiltonschool = loadImage("hiltonschool.jpg");
  asiaschool = loadImage("asiaschool.jpg");
  germanyschool = loadImage("germanyschool.jpg");
  hiltonschoolg = loadImage("hiltonschoolg.jpg");
  cls = loadImage("cls.jpg");
}

void draw() {
   while (port.available() > 0) { //if there is data coming in from the serial monity
     myString = port.readStringUntil(10); //strips data of serial port
     if (myString != null) {
      background(255); // makes background white
       if (myString.substring(0,1).equals("1")){
        clear();
        image(cls, 0, 0);
      }
      if (myString.substring(1,2).equals("1")){
        clear();
        image(soamschool, 0, 0);
      }
      if (myString.substring(2,3).equals("1")){
        clear();
        image(hiltonschool, 0, 0, width/2, height/2);
        image(hiltonschoolg, 300, 200, width/2, height/2);
      }
     if (myString.substring(3,4).equals("1")){
        clear();
        textSize(32);
        text("Not yet!", 10, 40);
      }
      if (myString.substring(4,5).equals("1")){
        clear();
        textSize(32);
        text("Not yet!", 10, 40);
      }
      if (myString.substring(5,6).equals("1")){
        clear();
        image(asiaschool, 0, 0);
      }
      if (myString.substring(6,7).equals("1")){
        clear();
        image(italyschool, 0, 0, width, height/2);
        image(franceschool, 0, 200, width/2, height/2);
        image(germanyschool, 300, 200, width/2, height/2);
      }
    }
  }
}
