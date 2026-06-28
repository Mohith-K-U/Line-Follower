#  Line Follower Robot

### Arduino-Based Autonomous Line Following Robot using 3 IR Sensors

> An autonomous line-following robot built using Arduino, three IR sensors, and a dual DC motor drive system. The robot continuously detects and follows a black line by adjusting its direction based on sensor inputs.

---

## 📖 Overview

This project demonstrates the implementation of a line-following robot using three infrared (IR) sensors for path detection. Sensor data is processed by an Arduino, which controls two DC motors to keep the robot aligned with the track.

The project serves as a practical introduction to embedded systems, sensor interfacing, and autonomous robotic navigation.

---

## ✨ Features

- 🤖 Autonomous line following
- 📍 Three IR sensor navigation
- ⚙️ Differential drive control
- 🔄 Automatic left and right correction
- 🚗 Forward movement control
- 🎛️ Adjustable motor speed using PWM
- 💡 Simple and lightweight Arduino implementation

---

## 🛠 Hardware

- Arduino Uno / Nano
- 3 IR Line Tracking Sensors
- L298N Motor Driver
- 2 DC Gear Motors
- Robot Chassis
- Wheels
- Battery Pack

---

## 💻 Software

- Arduino IDE
- C++

---

## ⚙️ Working

1. The three IR sensors continuously detect the line.
2. Sensor values are read by the Arduino.
3. Based on the detected pattern:
   - Move Forward
   - Turn Left
   - Turn Right
4. The motors are controlled through the L298N motor driver using PWM.

---

## 👨‍💻 Author

**Mohith K U**

📧 mohithmandanna29@gmail.com

---

## 📄 License

This project is protected under an **All Rights Reserved** license.

The source code is shared for viewing, portfolio, and educational reference only. Unauthorized copying, modification, redistribution, or commercial use is strictly prohibited.
