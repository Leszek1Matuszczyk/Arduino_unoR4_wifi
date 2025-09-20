#define PWM_LED 3   // Assign pin 3 to the PWM-controlled LED
#define ANALOG 0    // Assign analog input A0 for sensor/input reading

void setup() {
  
  pinMode(PWM_LED, OUTPUT);      // Configure pin 3 as output for LED
}

void loop() {
  // Write the same analog input value to LED pin as PWM output (brightness control)
  analogWrite(PWM_LED, analogRead(ANALOG));

  delay(50);  // Small delay to stabilize readings (50 ms)
}
