Smart Home System — IoT Safety & Automation for Kashmir Winters

Smart Home System is an IoT-based home monitoring and automation project designed to make homes in Kashmir safer, more sustainable, and energy-efficient during the harsh winter months.

Developed by Mohammad Uthman, this project blends engineering with empathy to address real challenges faced by families living through sub-zero conditions.

Why I Built This

Every winter in Kashmir, families face deadly risks due to unsafe heating, gas leaks, and the absence of reliable monitoring systems. Having grown up in this environment, I’ve witnessed first-hand how easily preventable tragedies occur — often because people lack awareness or access to affordable smart solutions.

This project started with a simple belief: technology should protect people, not just make their lives easier.
By combining IoT sensors, automation, and a cloud-based dashboard, the Smart Home System helps Kashmiri households stay warm, safe, and efficient — even during long, freezing winters.

The Problem

Each winter, dozens of people in Jammu & Kashmir lose their lives to carbon monoxide poisoning and suffocation caused by indoor heating systems.

Between December 2024 and January 2025, six asphyxiation incidents claimed 19 lives across J&K — mostly due to improper heating in closed rooms.

In the same month, nine people died in six days from suffocation caused by coal and gas heaters in poorly ventilated spaces.

Nationwide, over 124,000 deaths in 2015 were linked to indoor air pollution, according to a Business Standard report.

The World Health Organisation (WHO) identifies indoor air pollution — from gas leaks, inefficient stoves, and smoke — as a major public health hazard in India.

These statistics highlight an urgent need for affordable, real-time monitoring systems that can prevent such tragedies before they happen.

Overview

The system monitors key environmental conditions inside multiple rooms — such as temperature, humidity, gas concentration, and motion — and automatically reacts to potential dangers.

Parameter	Sensor	Function
Temperature & Humidity	DHT11 / DHT22	Monitors and maintains safe indoor temperature and humidity
Gas & Smoke	MQ2 / MQ5	Detects carbon monoxide, LPG, and smoke
Motion	PIR Sensor	Detects inactivity or unusual movement
Alarm	Active Buzzer	Sounds alerts during emergencies
Controller	NodeMCU (ESP8266)	manages sensors and transmits data to the cloud
Dashboard	HTML + JavaScript + NinjaIoT	Displays live readings and trends
Key Features

Real-Time Monitoring: Live temperature, humidity, and gas readings across multiple rooms.

Alerts & Automation: Automatically activates alarms or regulates appliances when thresholds are exceeded.

Energy Efficiency: Smart heater control to reduce unnecessary power consumption.

Multi-Room Dashboard: View separate panels for each room.

Cloud Connectivity: Uses NinjaIoT for secure, low-latency data updates.

Visual Analytics: Displays graphs and long-term trends for better insights.

Minimal, Modern UI: Clean and responsive design for a smooth user experience.

Folder Structure
Smart-Home-System/
├── index.html         # Web dashboard
├── livingroom.ino     # NodeMCU code for living room
├── bedroom.ino        # NodeMCU code for bedroom
├── kitchen.ino        # NodeMCU code for kitchen
└── README.md          # Documentation

Hosting & Deployment

The live web dashboard is hosted on Netlify:
Live Demo: https://smarthomesystembymu.netlify.app/

To host your own version:

Fork or clone the repository.

Go to Settings → Pages on GitHub.

Set branch to main and folder to / (root).

Save the settings — your dashboard will go live instantly.

Hardware Requirements

NodeMCU ESP8266 (x3)

DHT11 / DHT22 Sensors

MQ2 / MQ5 Gas Sensors

PIR Motion Sensors

Active Buzzer

LCD I2C Display (optional)

Breadboard, jumper wires, power supply

Software Stack

Arduino IDE

NinjaIoT Cloud Platform

HTML, CSS, JavaScript

Firebase / ThingSpeak (optional for extensions)

How It Works

Each NodeMCU gathers data from its connected sensors.

The data is sent securely to the NinjaIoT cloud.

The web dashboard fetches and visualises the data in real time.

If dangerous conditions are detected:

The buzzer activates instantly.

Alerts appear on the dashboard.

Heaters or other devices can be regulated automatically.

Impact

This project is built for the people of Kashmir — to make homes safer and winters more bearable through accessible technology.

Designed for cold-climate households prone to indoor heating risks.

Can help reduce energy waste by up to 25% with automation.

Detects and prevents carbon monoxide poisoning, gas leaks, and smoke accumulation.

Promotes IoT literacy and innovation among young learners in the region.

Developer

Mohammad Uthman
STEM Student • Innovator • Youth Leader
Srinagar, Jammu & Kashmir

📧 mohammaduthman08@gmail.com

🔗 LinkedIn

📸 Instagram

Acknowledgements

Grateful to NinjaIoT for providing cloud infrastructure support.

Inspired by the resilience of Kashmiri families who face extreme winters with courage and perseverance.

“Innovation means building solutions for the problems that touch your own people first.”
— Mohammad Uthman

© 2025 Mohammad Uthman — All Rights Reserved.
