// Project 2 - Christmas Lights
// Group Members:
// Jashanpreet Singh
// Milan Karki
// Aryan Katotra

// LED pins (based on your circuit)
int leds[6] = {2, 3, 4, 5, 6, 7};

void setup() {
  // Set all LED pins as OUTPUT
  for(int i = 0; i < 6; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Turn LEDs on and off in sequence
  for(int i = 0; i < 6; i++) {
    digitalWrite(leds[i], HIGH);
    delay(300);        // Choose delay time (not used in class)
    digitalWrite(leds[i], LOW);
    delay(150);
  }
}
