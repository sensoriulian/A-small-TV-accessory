// defines pins numbers
const int trigPin = 9;   // Pin Trig Sensor
const int echoPin = 10;  // Pin Echo Sensor
const int releuPin = 8;  // Pin relay

// defines variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);  // Sets the echoPin as an Input
  pinMode(releuPin, OUTPUT); // Sets the pin for the relay as an Output
  digitalWrite(releuPin, LOW); // Initializarea cu starea dezactivata (LOW)
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);

  // Check if someone is within 1 meter (100 cm)
  Serial.println("Setat la 1 metru");
  if (distance <= 100) {
    // Activate the relay
    digitalWrite(releuPin, LOW);
    Serial.println("Relay activated!");
    Serial.println(distance);
    delay(10000);
    // Deactivate the relay
    digitalWrite(releuPin, HIGH);
     Serial.println("Relay deactivated ...");
  }
  // Wait to avoid repeated distance readings
  delay(500);
}
