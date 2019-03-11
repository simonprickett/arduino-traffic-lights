#ifdef ARDUINO_AVR_UNO
// Arduino Uno
const byte redLight = 13;
const byte amberLight = 12;
const byte greenLight = 11;
#else
// Adafruit Feather Huzzah
const byte redLight = 14;
const byte amberLight = 12;
const byte greenLight = 13;
#endif

void setup() {
  pinMode(redLight, OUTPUT);
  pinMode(amberLight, OUTPUT);
  pinMode(greenLight, OUTPUT);

  digitalWrite(redLight, LOW);
  digitalWrite(amberLight, LOW);
  digitalWrite(greenLight, LOW);
}

void loop() {
  digitalWrite(redLight, HIGH);
  delay(3000);

  digitalWrite(amberLight, HIGH);
  delay(1000);

  digitalWrite(redLight, LOW);
  digitalWrite(amberLight, LOW);
  digitalWrite(greenLight, HIGH);
  delay(5000);

  digitalWrite(greenLight, LOW);
  digitalWrite(amberLight, HIGH);
  delay(2000);

  digitalWrite(amberLight, LOW);
}
