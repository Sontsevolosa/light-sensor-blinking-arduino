void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // simulating of long signals
  digitalWrite(13, HIGH);
  delay(900);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(900);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(900);
  digitalWrite(13, LOW);
  delay(500);

  // simulating of short signals
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(13, LOW);
  delay(500);
}
