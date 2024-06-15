/*
    Project name : Turbidity sensor Particle Sensor
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-turbidity-sensor-particle-sensor
*/

const int turbidityPin = A0; // Analog pin connected to the turbidity sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int turbidityValue = analogRead(turbidityPin); // Read analog value from turbidity sensor

  // Print the turbidity value to the Serial Monitor
  Serial.print("Turbidity Value: ");
  Serial.println(turbidityValue);

  delay(1000); // Add a delay before the next reading
}
