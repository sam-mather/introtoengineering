const int trigPin = 8;
const int echoPin = 9;
float duration, distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  distance = readUltrasonic();  
  Serial.print("Distance (cm): ");
  Serial.println(distance); 
  delay(1000);
}

float readUltrasonic(){
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  return distance;
}

