#include <NinjaIoT.h>
#include "DHT.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <NTPClient.h>
#include <WiFiUdp.h>

#define DHTPIN D3
#define DHTTYPE DHT11
#define LDR A0
#define PIR D5
#define BUZZER D7
#define LED D8  // Normal LED (brightness control)

DHT dht(DHTPIN, DHTTYPE);
NinjaIoT iot;
LiquidCrystal_I2C lcd(0x27, 16, 2);
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", 19800); // +5:30 for IST

int peopleCount = 0;
int lastMotionState = 0;
int brightness = 0;
unsigned long lastMotionTime = 0;
bool energySaveMode = false;
unsigned long lastBuzzTime = 0;  // For buzzer timing

void setup() {
  Serial.begin(115200);

  // --- WiFi + IoT Connect ---
  iot.connect("Airtel_Uthman", "shireen1214", "MU08");
  dht.begin();
  lcd.init();
  lcd.backlight();
  pinMode(PIR, INPUT);
  pinMode(LDR, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(BUZZER, LOW);
  analogWrite(LED, 0);

  // --- Welcome Sequence ---
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Welcome :)");
  delay(1500);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Smart Home System");
  lcd.setCursor(2, 1);
  lcd.print("Living Room Node");
  delay(2000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Location:");
  lcd.setCursor(0, 1);
  lcd.print("Srinagar, Kashmir");
  delay(2500);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Developed By:");
  lcd.setCursor(0, 1);
  lcd.print("Mohammad Uthman");
  delay(2500);

  // --- Initialize NTP time ---
  timeClient.begin();
  timeClient.update();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("System Ready...");
  delay(1500);
}

void loop() {
  timeClient.update();

  float t = dht.readTemperature();
  float h = dht.readHumidity();
  int lightVal = analogRead(LDR);
  int motionState = digitalRead(PIR);

  // --- People Counting ---
  if (motionState == HIGH && lastMotionState == LOW) {
    peopleCount++;
    if (peopleCount > 5) peopleCount = 5;
    lastMotionTime = millis();
  }
  lastMotionState = motionState;

  // --- Send to IoT ---
  iot.WriteVar("Temperature_LivingRoom", t);
  iot.WriteVar("Humidity_LivingRoom", h);
  iot.WriteVar("Light_LivingRoom", lightVal);
  iot.WriteVar("Motion_LivingRoom", motionState);
  iot.WriteVar("People_LivingRoom", peopleCount);

  // --- Auto brightness ---
  brightness = map(lightVal, 100, 800, 255, 30);
  brightness = constrain(brightness, 30, 255);

  // --- Energy saving mode ---
  if ((millis() - lastMotionTime > 120000) && !energySaveMode) { // 2 min no motion
    energySaveMode = true;
    lcd.noBacklight();
    analogWrite(LED, 0);
  } else if (motionState == HIGH && energySaveMode) {
    energySaveMode = false;
    lcd.backlight();
  }

  if (!energySaveMode) analogWrite(LED, brightness);

  // --- Smart Buzzer Alerts ---
  bool alert = (lightVal < 150 || t > 32);
  if (alert) {
    if (millis() - lastBuzzTime > 3000) { // beep every 3 sec
      digitalWrite(BUZZER, HIGH);
      delay(500);
      digitalWrite(BUZZER, LOW);
      lastBuzzTime = millis();
    }
  } else {
    digitalWrite(BUZZER, LOW);
  }

  // --- Display rotation ---
  static int screen = 0;
  static unsigned long lastSwitch = 0;
  if (millis() - lastSwitch > 3000) {
    screen = (screen + 1) % 3;
    lastSwitch = millis();
  }

  lcd.clear();
  if (screen == 0) {
    lcd.setCursor(0, 0);
    lcd.print("T:");
    lcd.print(t, 1);
    lcd.print("C H:");
    lcd.print(h, 0);
    lcd.print("%");
    lcd.setCursor(0, 1);
    lcd.print("Light:");
    lcd.print(lightVal);
  }
  else if (screen == 1) {
    lcd.setCursor(0, 0);
    lcd.print("People:");
    lcd.print(peopleCount);
    lcd.print(" Mot:");
    lcd.print(motionState ? "Yes" : "No ");
    lcd.setCursor(0, 1);
    lcd.print("LED Bright:");
    lcd.print(brightness);
  }
  else if (screen == 2) {
    String formattedTime = timeClient.getFormattedTime();
    lcd.setCursor(0, 0);
    lcd.print("Time:");
    lcd.print(formattedTime);
    lcd.setCursor(0, 1);
    lcd.print("Srinagar | MU");
  }

  // --- Alert message on LCD ---
  if (alert) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("ALERT: ");
    if (t > 32) lcd.print("High Temp!");
    else lcd.print("Low Light!");
    lcd.setCursor(0, 1);
    lcd.print("Check System!");
    delay(1000);
  }

  // --- Serial Log ---
  Serial.print("T: "); Serial.print(t);
  Serial.print(" H: "); Serial.print(h);
  Serial.print(" L: "); Serial.print(lightVal);
  Serial.print(" Brightness: "); Serial.print(brightness);
  Serial.print(" Ppl: "); Serial.print(peopleCount);
  Serial.print(" EnergySave: "); Serial.println(energySaveMode ? "ON" : "OFF");

  delay(500);
}
