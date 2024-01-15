
const int trigPin = 10;
const int echoPin = 9; 
const int buzzerPin = 2;
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int distance; 
  int duration; 
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, HIGH);
  delay(1);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2)/29.1;
  if(distance <= 50 && distance >=0)
  {
    digitalWrite(buzzerPin, HIGH);
  }
  else{
    digitalWrite(buzzerPin, LOW);
  }
  delay(60);
}
