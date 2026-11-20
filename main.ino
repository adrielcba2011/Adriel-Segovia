const int PIN_ROJO = 2;
const int PIN_AMARILLO = 3;
const int PIN_VERDE = 4;

void setup() {
  pinMode(PIN_ROJO, OUTPUT);
  pinMode(PIN_AMARILLO, OUTPUT);
  pinMode(PIN_VERDE, OUTPUT);
}

void loop() {
  // Luz verde (5 segundos)
  digitalWrite(PIN_VERDE, HIGH);
  digitalWrite(PIN_AMARILLO, LOW);
  digitalWrite(PIN_ROJO, LOW);
  delay(5000);

  // Luz amarilla (2 segundos)
  digitalWrite(PIN_VERDE, LOW);
  digitalWrite(PIN_AMARILLO, HIGH);
  digitalWrite(PIN_ROJO, LOW);
  delay(2000);

  // Luz roja (5 segundos)
  digitalWrite(PIN_VERDE, LOW);
  digitalWrite(PIN_AMARILLO, LOW);
  digitalWrite(PIN_ROJO, HIGH);
  delay(5000);
}