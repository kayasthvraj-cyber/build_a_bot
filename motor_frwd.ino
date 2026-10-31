// Motor A (Left Motor)
const int pinPWMA = 14;
const int pinAIN1 = 26;
const int pinAIN2 = 27;

// Motor B (Right Motor)
const int pinPWMB = 32;
const int pinBIN1 = 33;
const int pinBIN2 = 23;

// Standby Pin
const int pinSTBY = 25;

// Motor speed (0-255)
const int speed = 200;

void setup() {

  // Configure Motor A pins
  pinMode(pinPWMA, OUTPUT);
  pinMode(pinAIN1, OUTPUT);
  pinMode(pinAIN2, OUTPUT);

  // Configure Motor B pins
  pinMode(pinPWMB, OUTPUT);
  pinMode(pinBIN1, OUTPUT);
  pinMode(pinBIN2, OUTPUT);

  // Configure Standby pin
  pinMode(pinSTBY, OUTPUT);

  // Activate motor driver
  digitalWrite(pinSTBY, HIGH);

  // Motor A Forward
  digitalWrite(pinAIN1, HIGH);
  digitalWrite(pinAIN2, LOW);
  analogWrite(pinPWMA, speed);

  // Motor B Forward
  digitalWrite(pinBIN1, HIGH);
  digitalWrite(pinBIN2, LOW);
  analogWrite(pinPWMB, speed);
}

void loop() {
  // Motors keep rotating forward continuously
}