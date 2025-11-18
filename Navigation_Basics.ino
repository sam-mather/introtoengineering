const int RightMotorA = 3;
const int RightMotorB = 5;
const int LeftMotorA = 6;
const int LeftMotorB = 11;

void setup() {
pinMode(RightMotorA, OUTPUT);
pinMode(RightMotorB, OUTPUT);
pinMode(LeftMotorA, OUTPUT);
pinMode(LeftMotorB, OUTPUT);
}
  
void loop() {
  // Forward
  digitalWrite(RightMotorA, HIGH);
  digitalWrite(RightMotorB, LOW);
  digitalWrite(LeftMotorA, HIGH);
  digitalWrite(LeftMotorB, LOW);
  delay(2000);  
  
  // Stop
  digitalWrite(RightMotorA, LOW);
  digitalWrite(RightMotorB, LOW);
  digitalWrite(LeftMotorA, LOW);
  digitalWrite(LeftMotorB, LOW);
  delay(2000);

  // Backward
  digitalWrite(RightMotorA, LOW);
  digitalWrite(RightMotorB, HIGH);
  digitalWrite(LeftMotorA, LOW);
  digitalWrite(LeftMotorB, HIGH);
  delay(2000);  
  
  // Stop
  digitalWrite(RightMotorA, LOW);
  digitalWrite(RightMotorB, LOW);
  digitalWrite(LeftMotorA, LOW);
  digitalWrite(LeftMotorB, LOW);
  delay(2000);
}