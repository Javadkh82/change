
const int ledPin = 13;
const int interrupt = 2;
volatile bool led = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interrupt, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interrupt), change, CHANGE);
}

void loop() {
  digitalWrite(ledPin, led);
}

void change() {
  led = !led;
}

