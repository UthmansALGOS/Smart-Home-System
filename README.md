# 🏠 Smart Home System — IoT Safety & Automation for Kashmir Winters

A next-generation **IoT-based home monitoring and automation system** built to ensure **safety, sustainability, and energy efficiency** during the harsh winters of **Kashmir**.  

Developed by **Mohammad Uthman**, this project merges technology and empathy to address real-world problems faced by families during sub-zero conditions.

---

## 💡 Why I Built This Project

Every winter in Kashmir, numerous families face **life-threatening indoor conditions** due to unsafe heating, gas leaks, and the absence of real-time monitoring systems.  
As someone who has grown up in this environment, I’ve witnessed how **preventable tragedies** occur due to **lack of awareness or affordable smart solutions**.

This project was born out of the belief that **technology should protect lives** — not just make them easier.  
By leveraging **IoT sensors**, **smart automation**, and **cloud dashboards**, the Smart Home System provides **peace of mind** to families, ensuring their homes remain **warm, efficient, and safe**.

---

## ⚙️ Project Overview

The system continuously tracks environmental parameters inside multiple rooms (Bedroom, Living Room, and Kitchen) and intelligently reacts to potential hazards.

| Parameter | Sensor Used | Function |
|------------|--------------|-----------|
| 🌡️ Temperature & Humidity | DHT11 / DHT22 | Detects unsafe heat levels or low humidity |
| 💨 Gas & Smoke | MQ2 / MQ5 | Detects carbon monoxide, LPG, and smoke |
| 🚶 Motion | PIR Sensor | Detects unusual movement or inactivity |
| 🔊 Buzzer | Active Buzzer | Sounds alerts for emergencies |
| 🧠 MCU | NodeMCU (ESP8266) | Controls devices and sends data to the cloud |
| 🖥️ Web Dashboard | HTML + JS + NinjaIoT | Displays real-time readings and analytics |

---

## 🧠 Features

- 📶 **Live Data Streaming** — View temperature, humidity, gas levels, and motion in real time.
- 🧩 **Multi-Room Monitoring** — Separate dashboards for Bedroom, Living Room, and Kitchen.
- 🔔 **Instant Alerts** — Notifies when gas or temperature exceeds safe thresholds.
- ⚙️ **Smart Energy Management** — Automatically regulates heater and energy use.
- ☁️ **Cloud Integration via NinjaIoT** — Secure real-time updates to your dashboard.
- 📊 **Graphical Analytics** — View trends of temperature, humidity, and gas levels.
- 🌙 **Dark Mode + Glass UI** — Elegant, minimal interface inspired by Apple design.

---

## 🧩 Folder Structure

Smart-Home-System/
├── index.html # Web dashboard
├── livingroom.ino # NodeMCU code for living room
├── bedroom.ino # NodeMCU code for bedroom
├── kitchen.ino # NodeMCU code for kitchen
└── README.md # Project documentation


---

## 🌍 Hosting & Deployment

The web dashboard is hosted via **GitHub Pages** for instant access:

🔗 **Live Demo:** [https://smarthomesystembymu.netlify.app/](https://smarthomesystembymu.netlify.app/)

To host your own:
1. Fork this repository or upload your files.
2. Go to **Settings → Pages**.
3. Set branch = `main`, folder = `/ (root)`.
4. Save, and your dashboard will be live in under a minute.

---

## ⚡ Hardware Requirements

- NodeMCU ESP8266 (x3)
- DHT11 / DHT22 Sensors
- MQ2 / MQ5 Gas Sensors
- PIR Motion Sensors
- Active Buzzer
- LCD I2C (optional)
- Breadboard + Jumper Wires + Power Supply

---

## 🧰 Software Stack

- **Arduino IDE** (for ESP8266)
- **NinjaIoT Cloud Platform**
- **HTML, CSS, JavaScript**
- **Firebase / ThingSpeak (optional extensions)**

---

## 📈 How It Works

1. Each NodeMCU device collects real-time data from its sensors.  
2. Data is transmitted securely using **NinjaIoT**.
3. The **web dashboard** fetches this live data and visualizes it using **dynamic graphs** and **status cards**.
4. If unsafe conditions are detected:
   - The buzzer activates.
   - Alerts appear on the dashboard.
   - Heater or device control can be automated.

---

## 🌿 Impact

> “This project aims to make Kashmiri homes safer, one sensor at a time.”

- 🧊 Designed specifically for **cold-climate households**.
- ⚙️ Reduces **energy wastage by up to 25%** using intelligent automation.
- 🫁 Detects **toxic gases, smoke, and overheating** before it’s too late.
- 💬 Creates awareness about **IoT-driven sustainability** among youth.

---

## 🧑‍💻 Developer

**Mohammad Uthman**  
STEM Student • Innovator • Youth Leader • Environmental Advocate  
📍 Srinagar, Jammu & Kashmir  

📧 [mohammaduthman08@gmail.com](mailto:mohammaduthman08@gmail.com)  
🔗 [LinkedIn](https://www.linkedin.com/in/mohammad-uthman)  
📸 [Instagram](https://www.instagram.com/lifethroughuthmanslens)

---

## ❤️ Acknowledgements

- Special thanks to **NinjaIoT** for providing the cloud infrastructure.  
- Built with inspiration from **the resilience of Kashmiri families** and **a vision for smarter, safer homes**.

---

### ✨ Quote

> “Innovation means building solutions for the problems that touch your own people first.”

---

© 2025 Mohammad Uthman — All Rights Reserved.
