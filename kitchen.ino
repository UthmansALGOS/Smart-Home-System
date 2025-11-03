#include <NinjaIoT.h>
#include "DHT.h"

#define DHTPIN D3
#define DHTTYPE DHT11
#define MQ2 A0
#define BUZZER D6

NinjaIoT iot;
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  iot.connect("Airtel_Uthman", "shireen1214", "MU08");
  dht.begin();

  pinMode(MQ2, INPUT);
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, LOW);

  Serial.println("Kitchen Node Initialized...");
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  int gasRaw = analogRead(MQ2);

  // Convert to 0–100% range
  float gasPercent = map(gasRaw, 0, 1023, 0, 100);

  // Simple smoke detection threshold
  int smoke = (gasPercent > 60) ? 1 : 0;

  // Buzzer alert if smoke detected
  if (smoke == 1) {
    Serial.println("⚠️ Smoke detected! Activating buzzer...");
    digitalWrite(BUZZER, HIGH);
    delay(500);
    digitalWrite(BUZZER, LOW);
  }

  // Send data to IoT
  iot.WriteVar("Temperature_Kitchen", t);
  iot.WriteVar("Humidity_Kitchen", h);
  iot.WriteVar("Gas_Kitchen", gasPercent);
  iot.WriteVar("Smoke_Kitchen", smoke);

  // Display on Serial
  Serial.print("T: "); Serial.print(t); Serial.print("°C  ");
  Serial.print("H: "); Serial.print(h); Serial.print("%  ");
  Serial.print("Gas: "); Serial.print(gasPercent); Serial.print("%  ");
  Serial.print("Smoke: "); Serial.println(smoke ? "Detected" : "None");

  delay(2000);
}
