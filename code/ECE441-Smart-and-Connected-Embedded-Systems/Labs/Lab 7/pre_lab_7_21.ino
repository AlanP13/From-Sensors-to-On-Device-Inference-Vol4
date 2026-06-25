int WalkRequestW = 0;
const int SensorW = 13;
int GreenNS = 4;
int YellowNS = 3;
int RedNS = 2;
int GreenEW = 7;
int YellowEW = 6;
int RedEW = 5;
volatile int buttonState = 0;  
void setup() {
  pinMode(GreenNS, OUTPUT);
    pinMode(YellowNS, OUTPUT);
  	pinMode(RedNS, OUTPUT); 
  	pinMode(GreenEW, OUTPUT);
  	pinMode(YellowEW, OUTPUT);
    pinMode(RedEW, OUTPUT);
	pinMode(SensorW , INPUT);
 	attachInterrupt(0, pin_ISR, CHANGE);
  	digitalWrite (RedEW, HIGH);
}
void loop() {
  delay(1000); 
  digitalWrite(RedNS, LOW); 
  digitalWrite(GreenNS, HIGH);
  delay(10000);  
  digitalWrite(GreenNS, LOW);
  digitalWrite(YellowNS, HIGH);
  delay(1000); 
  digitalWrite(YellowNS, LOW); 
  digitalWrite(RedNS, HIGH);
  if (WalkRequestW == 1) 
  {  
    WalkCycle();
  }
}
void WalkCycle() {
  delay(1000);  //  1 Seconds of RedEW
  digitalWrite(RedEW, LOW); //  Sets RedEW OFF GreenEW ON
  digitalWrite(GreenEW, HIGH);  
  delay(5000);  // 5 Seconds of GreenEW
  digitalWrite(GreenEW, LOW); //  Sets GreenEW OFF YellowEW ON
  digitalWrite(YellowEW, HIGH);  
  delay(1000);  // 1 Seconds of YellowEW
  digitalWrite(YellowEW, LOW);  //  Sets YellowEW OFF RedEW ON 
  digitalWrite(RedEW, HIGH);  
  WalkRequestW = 0; //  Reset Push Button
  asm volatile ("  jmp 0");  // Soft-reset of sketch. Makes sure Station 1 "MAIN" always gets Green after a walk cycle
}
void pin_ISR() {
  buttonState = digitalRead(SensorW);
  (WalkRequestW = 1);  //  Walk button has been pressed
}