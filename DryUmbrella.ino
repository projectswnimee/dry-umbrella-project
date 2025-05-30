#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2       // DS18B20 data pin
#define HEATER_PIN 7         // Heater control pin (connected to relay)
#define TEMP_THRESHOLD 35.0  // °C threshold

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
  
  pinMode(HEATER_PIN, OUTPUT);
  digitalWrite(HEATER_PIN, HIGH); // Heater ON initially (assuming active LOW relay)
}

void loop() {
  sensors.requestTemperatures();
  float tempC = sensors.getTempCByIndex(0);
  
  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println(" °C");

  if (tempC > TEMP_THRESHOLD) {
    digitalWrite(HEATER_PIN, HIGH);  // Turn OFF heater
    Serial.println("Heater OFF");
  } else {
    digitalWrite(HEATER_PIN, LOW); // Turn ON heater
    Serial.println("Heater ON");
  }

  delay(1000);
}
