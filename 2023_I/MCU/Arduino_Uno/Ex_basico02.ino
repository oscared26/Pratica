const int ledPin = 13;
const int buttonPin = 2;
int readPin;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  readPin=digitalRead(buttonPin);  // Gera um sinal PWM no LED proporcional ao valor do sensor
  delay(10);  // Aguarda 100 milissegundos
  digitalWrite(ledPin, readPin);  // Liga o LED
}
