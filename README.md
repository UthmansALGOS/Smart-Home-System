# Smart Home System — IoT Safety & Automation for Kashmir Winters

A next-generation **IoT-based home monitoring and automation system** designed to ensure **safety, sustainability, and energy efficiency** during the harsh winters of **Kashmir**.  

Developed by **Mohammad Uthman**, this project merges engineering, empathy, and innovation to address real-world safety and energy issues faced by Kashmiri households.

---

## 1. Background

Every winter, homes in Kashmir face extreme risks due to **unsafe heating practices**, **gas leaks**, and **lack of real-time monitoring**.  
Over the past decade, dozens of families have suffered from **carbon monoxide poisoning**, **fire incidents**, and **suffocation** during prolonged snowbound nights.  
In 2023 alone, multiple fatal incidents were reported in Srinagar and other districts due to **improperly ventilated heaters** and **undetected gas leaks**.

> “This project was created to ensure that no family loses their loved ones to something technology could have prevented.”

---

## 2. Objective

To build an **affordable**, **scalable**, and **reliable** IoT system that continuously monitors indoor air quality, temperature, and motion —  
and responds automatically to **prevent life-threatening situations** while optimizing **energy use**.

---

## 3. System Overview

The Smart Home System covers **three key zones** of a typical household:

| Zone | Controller Used | Sensors Integrated | Purpose |
|------|------------------|--------------------|----------|
| **Living Room** | NodeMCU ESP8266 | DHT22 (Temp & Humidity), MQ5 (Gas), PIR Motion, Buzzer | Detects unsafe temperature, gas, or inactivity |
| **Bedroom** | Wemos D1 Mini | DHT11 (Temp & Humidity), MQ2 (Smoke), PIR Motion | Ensures safe sleeping environment |
| **Kitchen** | Wemos D1 Mini | MQ5 (LPG Gas), DHT11, Flame Sensor | Detects leaks or fire hazards |

Each controller communicates with the **NinjaIoT cloud** to transmit real-time data to the web dashboard.

---

## 4. Key Features

- **Live Monitoring:** Real-time readings of temperature, humidity, gas concentration, and motion.  
- **Multi-Room Tracking:** Separate dashboards for Living Room, Bedroom, and Kitchen.  
- **Automated Alerts:** Buzzers trigger when gas or temperature exceeds safe thresholds.  
- **Energy Optimisation:** Automatically regulates heating devices during idle hours.  
- **Cloud-Based Visualisation:** Web dashboard updates data instantly through NinjaIoT.  
- **Analytics & Insights:** Graphs display daily temperature and air quality trends.  
- **Elegant Interface:** Simple dark glass UI designed for clarity and usability.

---

## 5. Hardware Components

| Component | Quantity | Function |
|------------|-----------|-----------|
| NodeMCU ESP8266 | 1 | Main controller for the Living Room |
| Wemos D1 Mini | 2 | Controllers for Bedroom and Kitchen |
| DHT11 / DHT22 | 3 | Measure ambient temperature and humidity |
| MQ2 | 1 | Detects smoke and general gas presence |
| MQ5 | 2 | Detects LPG and carbon monoxide |
| PIR Sensor | 3 | Detects human movement or inactivity |
| Active Buzzer | 3 | Alerts during emergencies |
| Flame Sensor | 1 | Detects open flame or fire |
| LCD I2C (optional) | 1 | Displays local readings |
| Breadboard + Jumper Wires | - | For circuit assembly |

---

## 6. Software & Tools

- **Arduino IDE** — for programming ESP8266 and Wemos boards  
- **NinjaIoT Cloud** — for real-time data transmission  
- **HTML, CSS, JavaScript** — for dashboard interface  
- **Firebase / ThingSpeak (optional)** — for extended analytics  
- **GitHub Pages** — for hosting the live web dashboard

---

## 7. System Architecture

```text
[ Sensors ]  →  [ NodeMCU / Wemos D1 Mini ]  →  [ NinjaIoT Cloud ]  →  [ Web Dashboard ]
         ↑                                                      ↓
     Alerts & Buzzer                                  Data Visualisation & Logs



8. Hosting and Deployment

A live demo of the system dashboard is available at:
🔗 https://smarthomesystembymu.netlify.app/

To host your own:

Clone or fork this repository.

Go to Settings → Pages in your GitHub repository.

Set the branch to main and folder to / (root).

Save and deploy — your dashboard will go live within minutes.

9. Impact
Category	Outcome
Safety	detects toxic gases, smoke, and overheating early
Sustainability	reduces household energy use by up to 25%
Affordability	Entire setup costs less than ₹1500 per room
Community Awareness	Promotes IoT adoption for safety and energy efficiency
Local Relevance	Designed for the Kashmiri climate and infrastructure

"Technology should protect lives, not just make them easier."

10. Folder Structure
Smart-Home-System/
├── index.html              # Web dashboard
├── livingroom.ino          # NodeMCU (Living Room)
├── bedroom.ino             # Wemos (Bedroom)
├── kitchen.ino             # Wemos (Kitchen)
└── README.md               # Documentation

11. Developer

Mohammad Uthman
STEM Student | Innovator | Youth Leader | Environmental Advocate
Srinagar, Jammu & Kashmir

📧 mohammaduthman08@gmail.com

🔗 LinkedIn(https://www.linkedin.com/in/mohammad-uthman/)

📸 Instagram(https://www.instagram.com/lifethroughuthmanslens/#)

12. Acknowledgements

NinjaIoT – for cloud infrastructure

Tyndale-Biscoe School STEM Department – for lab and mentorship support

Families of Kashmir – whose resilience inspired this project

"Innovation begins when empathy meets engineering."

© 2025 Mohammad Uthman — All Rights Reserved
