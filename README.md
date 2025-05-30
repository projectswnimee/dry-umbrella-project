# dry-umbrella-project
Smart umbrella that uses a nichrome wire heating system controlled by an Arduino and a DS18B20 waterproof temperature sensor to keep it dry.

This project is a **smart umbrella heating system** designed to keep your umbrella dry using a nichrome wire and temperature control logic. It’s powered by 4 batteries and controlled with an Arduino, using a **DS18B20 waterproof digital temperature sensor** for reliable moisture detection.

---

## 🔧 Features
- Automatically heats up when temperature drops below 35°C
- Uses **gauge 24 nichrome wire** as the heating element
- Compact and waterproof design with durable components
- Uses **relay module** with default ON state and auto cut-off at set temp
- Designed for both personal and academic use

---

## ⚙️ Components Used

| Component                            | Description                                     |
|-------------------------------------|-------------------------------------------------|
| Arduino Uno/Nano                    | Microcontroller to run the control logic        |
| DS18B20 (Waterproof) Temp Sensor    | Measures umbrella surface temperature           |
| 4 × 18650 Li-ion Batteries (16V)    | Power source                                    |
| Buck Converter                      | Converts 16V down to 5V for Arduino             |
| 1-Channel Relay Module (with protection) | Controls heating ON/OFF                     |
| Gauge 24 Nichrome Wire              | Used as heating element                         |
| 4.7kΩ Resistor                      | Pull-up for DS18B20 sensor data line            |

---

## 🔌 Wiring Summary

- **Sensor Data Pin** → Arduino digital pin 2 (with 4.7kΩ pull-up to 5V)
- **Buck Converter** → Converts battery 16V to 5V for Arduino + Sensor
- **Relay IN** → Arduino digital pin 7
- **Relay Output** → Connects/disconnects nichrome wire circuit

---

## 🔁 Logic Flow

- Relay is **ON by default** (heating the wire)
- Arduino continuously reads temperature from DS18B20
- If temperature **> 35°C**, relay turns OFF (stops heating)
- If temperature **< 35°C**, relay turns ON (heats again)
- Simple hysteresis-based logic ensures safety and energy efficiency

---

## 📷 Files Included
- `DryUmbrella.ino` – Arduino source code
- `circuit-diagram.png` – Wiring/circuit diagram
- `dry umbrella 2.jpg` – Final build photo

---

## 💬 Author

👤 **K.A.D.N.T NANAYAKKARA**  
🎓 Undergraduate, Faculty of Engineering, University of Sri Jayewardenepura  
🔗 LinkedIn *https://www.linkedin.com/in/nimesha-nanayakkara-8569b8363/*

---

> Feel free to clone, improve, or suggest changes. Contributions are welcome!
