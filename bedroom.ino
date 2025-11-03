#include <NinjaIoT.h>
#include "DHT.h"

NinjaIoT iot;

#define DHTPIN D3
#define DHTTYPE DHT11
#define PIR D5
#define MQ135 A0
#define LED D6   // LED pin

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW); // LED off initially

  iot.connect("Airtel_Uthman", "shireen1214", "MU08");
  dht.begin();
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  int air = analogRead(MQ135);
  int motion = digitalRead(PIR);

  // Print readings
  Serial.print("T: "); Serial.print(t); Serial.print("°C  ");
  Serial.print("H: "); Serial.print(h); Serial.print("%  ");
  Serial.print("Air: "); Serial.print(air); Serial.print("  ");
  Serial.print("Motion: "); Serial.println(motion);

  // Control LED based on motion
  if (motion == HIGH) {
    digitalWrite(LED, HIGH);  // Turn on LED when motion detected
    Serial.println("💡 Motion detected! LED ON");
  } else {
    digitalWrite(LED, LOW);   // Turn off LED when no motion
  }

  // Send data to NinjaIoT
  iot.WriteVar("Temperature_Bedroom", t);
  iot.WriteVar("Humidity_Bedroom", h);
  iot.WriteVar("AirQuality_Bedroom", air);
  iot.WriteVar("Motion_Bedroom", motion);

  delay(3000);
}
