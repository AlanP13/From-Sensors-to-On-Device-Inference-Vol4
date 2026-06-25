// C++ code
//Declare the pins
int GreenNS = 8;
int YellowNS = 9;
int RedNS = 10;
int GreenEW = 13;
int YellowEW = 12;
int RedEW = 11;
//Set pins as output
void setup()
{
  	pinMode(GreenNS, OUTPUT);
    pinMode(YellowNS, OUTPUT);
  	pinMode(RedNS, OUTPUT); 
  	pinMode(GreenEW, OUTPUT);
  	pinMode(YellowEW, OUTPUT);
    pinMode(RedEW, OUTPUT);
}
//For the transition of lights turning on and transition
void loop()
{
     // Green-NS ON, Red-EW ON 
    digitalWrite(GreenEW, LOW);
    digitalWrite(GreenNS, HIGH);
    digitalWrite(YellowEW, LOW);
    digitalWrite(YellowNS, LOW);
    digitalWrite(RedEW, HIGH);
    digitalWrite(RedNS, LOW);
    delay(10000);
   // Yellow-NS ON, Red-EW ON
    digitalWrite(GreenEW, LOW);
    digitalWrite(GreenNS, LOW);
    digitalWrite(YellowEW, LOW);
    digitalWrite(YellowNS, HIGH);
    digitalWrite(RedEW, HIGH);
    digitalWrite(RedNS, LOW);
    delay(1000);
   // Red-NS ON, Red-EW ON
    digitalWrite(GreenEW, LOW);
    digitalWrite(GreenNS, LOW);
    digitalWrite(YellowEW, LOW);
    digitalWrite(YellowNS, LOW);
    digitalWrite(RedEW, HIGH);
    digitalWrite(RedNS, HIGH);
    delay(1000);
   // Green-EW ON, Red-NS ON 
    digitalWrite(GreenEW, HIGH);
    digitalWrite(GreenNS, LOW);
    digitalWrite(YellowEW, LOW);
    digitalWrite(YellowNS, LOW);
    digitalWrite(RedEW, LOW);
    digitalWrite(RedNS, HIGH);
    delay(5000);
   // Yellow-EW ON, Red-NS ON
    digitalWrite(GreenEW, LOW);
    digitalWrite(GreenNS, LOW);
    digitalWrite(YellowEW, HIGH);
    digitalWrite(YellowNS, LOW);
    digitalWrite(RedEW, LOW);
    digitalWrite(RedNS, HIGH);
    delay(1000);
   // Red-NS ON, Red-EW ON
    digitalWrite(GreenEW, LOW);
    digitalWrite(GreenNS, LOW);
    digitalWrite(YellowEW, LOW);
    digitalWrite(YellowNS, LOW);
    digitalWrite(RedEW, HIGH);
    digitalWrite(RedNS, HIGH);
    delay(1000);
}