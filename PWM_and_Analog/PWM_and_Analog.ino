#define PWM_LED 3
#define ANALOG 0
void setup() {
  analogReadResolution(14);
  analogWriteResolution(14);
  pinMode(PWM_LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(ANALOG));
  analogWrite(PWM_LED, analogRead(ANALOG));
  delay(50);
}
