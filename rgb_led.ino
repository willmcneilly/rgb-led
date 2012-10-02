
int redLED = 11;
int blueLED = 12;
int greenLED = 13;


void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  digitalWrite(redLED, HIGH);
  delay(500);
  digitalWrite(blueLED, HIGH);
  delay(500);
  digitalWrite(greenLED, HIGH);
  delay(500);
  digitalWrite(redLED, LOW);
  delay(500);
  digitalWrite(blueLED, LOW);
  delay(500);
  digitalWrite(greenLED, LOW);   
}
