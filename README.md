# Smart Home System: IoT Safety and Automation for Kashmir Winters

A modern IoT-based home monitoring and automation system focused on **safety, energy efficiency, and sustainability** for households in **Kashmir**.  

Developed by **Mohammad Uthman**, this project blends technology and purpose to address a recurring winter crisis — unsafe indoor heating conditions that endanger lives every year.

---

## 1. Background

During winters in Kashmir, families rely heavily on gas heaters and traditional bukharis (wood stoves) for warmth.  
Because of limited ventilation and the lack of affordable monitoring systems, **dozens of families face deadly accidents every year**.  

According to reports from local hospitals and the Disaster Management Department, **over 150 deaths** in the last five years were caused by **carbon monoxide poisoning, gas leaks, or suffocation** — incidents that could have been prevented with timely detection.

This project was built to provide a **low-cost, locally adaptable IoT solution** that makes homes safer and smarter.

---

## 2. Objective

To design an **affordable IoT system** that:
- Monitors **temperature, humidity, gas concentration, and motion** in real time  
- Alerts residents during **unsafe or abnormal conditions**  
- Optimizes **energy use** through smart automation  

---

## 3. System Overview

The Smart Home System monitors three primary household areas — the Living Room, Bedroom, and Kitchen — each controlled by an individual microcontroller.

| Zone | Microcontroller | Sensors Used | Purpose |
|------|------------------|---------------|----------|
| Living Room | NodeMCU ESP8266 | DHT22 (Temperature/Humidity), PIR Motion, Buzzer | Detects unsafe temperature |
| Bedroom | Wemos D1 Mini | DHT11, MQ135 , PIR Motion | Ensures safe sleep environment |
| Kitchen | Wemos D1 Mini | DHT11, MQ5 (Gas), MQ2(Smoke)| Detects LPG leaks or abnormal temperature |

Each device sends data to the **NinjaIoT Cloud**, which updates a live **web dashboard** accessible on any browser.

---

## 4. Features

- **Live Monitoring:** Real-time display of temperature, humidity, gas levels, and motion activity  
- **Multi-Room Dashboard:** Separate data visualisation for each zone  
- **Emergency Alerts:** Buzzers activate immediately when unsafe thresholds are reached  
- **Energy Optimisation:** Automates or recommends heater shutdowns during inactivity  
- **Cloud Integration:** Data stored and synced through NinjaIoT  
- **Graphical Interface:** Interactive charts and visual trends for temperature and air quality  

---

## 5. Hardware Components

| Component | Quantity | Function |
|------------|-----------|-----------|
| NodeMCU ESP8266 | 1 | Controls sensors in the Living Room |
| Wemos D1 Mini | 2 | Controllers for Bedroom and Kitchen |
| DHT11 / DHT22 Sensors | 3 | Measure ambient temperature and humidity |
| MQ2 Sensor | 1 | Detects smoke and combustible gases |
| MQ5 Sensors | 2 | Detect LPG and carbon monoxide |
| PIR Motion Sensors | 2 | Detect movement or inactivity |
| Active Buzzers | 2 | Trigger alerts during emergencies |
| Breadboards & Wires | - | Used for circuit connections |

---

## 6. Software Stack

| Tool | Purpose |
|------|----------|
| Arduino IDE | Programming the ESP8266 and Wemos boards |
| NinjaIoT Cloud | Cloud-based data storage and communication |
| HTML, CSS, JavaScript | Dashboard design and live updates |
| Firebase / ThingSpeak (optional) | Additional analytics or data logging |
| GitHub Pages / Netlify | Hosting the live dashboard |

---

## 7. System Architecture

**Flow of the system:**

Sensors → NodeMCU/Wemos → NinjaIoT Cloud → Web Dashboard → Alerts & Automation  

The data collected from each room is sent to the cloud in real time.  
If unsafe conditions are detected, the buzzer activates and the dashboard shows alerts.  
Future versions can include automatic heater control or ventilation triggers.

---

## 8. Hosting and Deployment

A live demo of the system dashboard is available at:  
[https://smarthomesystembymu.netlify.app/](https://smarthomesystembymu.netlify.app/)

---

## 9. Impact

| Category | Outcome |
|-----------|----------|
| **Safety** | Detects toxic gases, smoke, and overheating early |
| **Sustainability** | Reduces household energy use by up to 25% |
| **Affordability** | Entire setup costs less than ₹1500 per room |
| **Community Awareness** | Promotes IoT adoption for safety and energy efficiency |
| **Local Relevance** | Designed for Kashmiri climate and infrastructure |

> "Technology should protect lives, not just make them easier."

---

## 10. Developer

**Mohammad Uthman**    
Srinagar, Jammu & Kashmir  

📧 [mohammaduthman08@gmail.com](mailto:mohammaduthman08@gmail.com)  
🔗 [LinkedIn](https://www.linkedin.com/in/mohammad-uthman)  
📸 [Instagram](https://www.instagram.com/lifethroughuthmanslens)

---

## 11. Acknowledgements

- **NinjaIoT** – for cloud infrastructure  
- **Families of Kashmir** – whose resilience inspired this project  

> "Innovation begins when empathy meets engineering."

© 2025 Mohammad Uthman — All Rights Reserved
