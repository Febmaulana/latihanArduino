byte ldr = 4;
int nilai;

void setup() {
  Serial.begin(115200);
}

void loop() {
  delay(3000);
  nilai = analogRead(ldr);
  Serial.print("Nilai LDR: ");
  Serial.println(nilai);
}
