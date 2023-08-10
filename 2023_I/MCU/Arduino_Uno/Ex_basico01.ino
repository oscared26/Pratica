const int ledPin = 9;
const int sensorPin = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Liga o LED
  delay(1000);                  // Aguarda 1 segundo
  digitalWrite(ledPin, LOW);   // Desliga o LED
  delay(1000);                  // Aguarda 1 segundo

  int sensorValue = analogRead(sensorPin);  // Lê o valor analógico do sensor
  int pwmValue = map(sensorValue, 0, 1023, 0, 255);  // Mapeia o valor para a faixa PWM
  analogWrite(ledPin, pwmValue);  // Gera um sinal PWM no LED proporcional ao valor do sensor
  delay(100);  // Aguarda 100 milissegundos
}
