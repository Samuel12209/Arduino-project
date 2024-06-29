int xPin = A0;
int yPin = A1;
int buttonPin = 2;
int buttonState = 0;
int BLUE = 13;
int RED = 12;
int GREEN = 11;
int YELLOW = 10;

void setup() {
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}
 
void loop() {
  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);
  buttonState = digitalRead(buttonPin);

if (xValue > 700 and yValue > 700){
  digitalWrite(RED,HIGH);
  digitalWrite(GREEN,LOW);
  digitalWrite(BLUE,LOW);
  digitalWrite(YELLOW,LOW);
}

if (xValue < 400 and yValue > 700){
  digitalWrite(BLUE,HIGH);
  digitalWrite(GREEN,LOW);
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
}

if (xValue > 700 and yValue < 400){
  digitalWrite(YELLOW,HIGH);
  digitalWrite(GREEN,LOW);
  digitalWrite(RED,LOW);
  digitalWrite(BLUE,LOW);
}

if (xValue < 400 and yValue < 400){
  digitalWrite(GREEN,HIGH);
  digitalWrite(BLUE,LOW);
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
}

  Serial.print("X: ");if (xValue < 400 and yValue > 700){
  digitalWrite(BLUE,HIGH);
  digitalWrite(GREEN,LOW);
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
}

if (xValue > 700 and yValue < 400){
  digitalWrite(YELLOW,HIGH);
  digitalWrite(GREEN,LOW);
  digitalWrite(RED,LOW);
  digitalWrite(BLUE,LOW);
}

if (xValue < 400 and yValue < 400){
  digitalWrite(GREEN,HIGH);
  digitalWrite(BLUE,LOW);
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
}

  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print(" | Y: ");
  Serial.print(yValue);
  Serial.print(" | Button: ");
  Serial.println(buttonState);
 
  delay(10);
}
  Serial.print(xValue);
  Serial.print(" | Y: ");
  Serial.print(yValue);
  Serial.print(" | Button: ");
  Serial.println(buttonState);
 
  delay(10);
}