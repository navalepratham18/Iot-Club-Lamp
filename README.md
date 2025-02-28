# 🚀 ESP8266 Blynk-Controlled LED Project 💡

This project allows you to control **5 LEDs** using the **ESP8266** via the **Blynk app** over Wi-Fi. Each LED is mapped to a separate button in the Blynk app, enabling individual control. 🎛️

## **1️⃣ Setting Up the Blynk App**
### **📲 Step 1: Download Blynk**
- Install the **Blynk IoT** app from:
  - [📥 Google Play Store](https://play.google.com/store/apps/details?id=cc.blynk)
  - [📥 Apple App Store](https://apps.apple.com/us/app/blynk-iot/id1422946482)

### **🆕 Step 2: Create a New Project**
1. Open the Blynk app and **sign up/log in**.
2. Click **➕ New Project**.
3. Enter the **Project Name** (e.g., "ESP8266 LED Control").
4. Select **📡 Device** → Choose **ESP8266**.
5. Choose **🔗 Connection Type** → Set to **Wi-Fi**.
6. Tap **✅ Create** → You will receive an **Auth Token** via email. 📧

### **🎛️ Step 3: Add Buttons for LEDs**
1. Inside the project, tap the **➕ “+” icon** to add widgets.
2. Select **🔘 Button** and place it on the screen.
3. Tap the button, set:
   - **📝 Name:** LED 1
   - **📍 Pin:** V0
   - **🔄 Mode:** Switch
4. Repeat this for **LED 2, LED 3, LED 4, and LED 5** using **V1, V2, V3, and V4**.
5. Click **💾 Save** and exit the editor.

---

## **2️⃣ Setting Up the ESP8266 Code**
### **📦 Step 1: Install Required Libraries**
Ensure you have the following **Arduino libraries** installed:
- 📂 **Blynk** ([Download](https://github.com/blynkkk/blynk-library))
- 📂 **ESP8266WiFi**

### **📡 Step 2: Enter Wi-Fi and Auth Token**
Modify the following **code snippet** in your **Arduino IDE**:

```cpp
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_AUTH_TOKEN" // 🔑 Enter Blynk Auth Token
char ssid[] = "YOUR_WIFI_SSID"; // 📶 Enter Wi-Fi Name
char pass[] = "YOUR_WIFI_PASSWORD"; // 🔐 Enter Wi-Fi Password
```

### **🔄 Step 3: Upload the Code to ESP8266**
1. 🔌 Connect **ESP8266 to PC** via USB.
2. 🖥️ Open the **Arduino IDE**.
3. 🔧 Select **Board**: "NodeMCU 1.0 (ESP-12E Module)".
4. ⚙️ Select **Port** (COMx).
5. 📤 Click **Upload** and wait for completion.

### **📲 Step 4: Run the Blynk App**
1. ⚡ Power the ESP8266.
2. 📱 Open the Blynk app and start the project.
3. 🕹️ Press buttons in the app to control LEDs!

---

## **3️⃣ Circuit Connections**
Each LED is connected through a **220Ω resistor** to prevent excess current. ⚡

| 💡 LED | 🖥️ ESP8266 Pin | 🔘 Virtual Pin |
|-----|------------|-------------|
| LED 1 | D0 | V0 |
| LED 2 | D1 | V1 |
| LED 3 | D2 | V2 |
| LED 4 | D3 | V3 |
| LED 5 | D4 | V4 |

**🔌 Connections:**
- **🔴 LED Anode (+)** → ESP8266 GPIO pin (D0 - D4) through a **220Ω resistor**.
- **⚫ LED Cathode (-)** → ESP8266 **GND**.

---

## **4️⃣ Powering the ESP8266**
- ✅ **Preferred:** USB power or **5V adapter**.
- ⚠️ **If using a 9V battery:** Use a **7805 voltage regulator** to step down to 5V.

---

## **5️⃣ Expected Output**
✅ Press **Button V0** → 💡 LED 1 Turns ON. Press again → LED 1 Turns OFF.  
✅ Press **Button V1** → 💡 LED 2 Turns ON. Press again → LED 2 Turns OFF.  
✅ Repeat for LEDs **V2, V3, V4**.  

---

🎉 Now, you can control your LEDs wirelessly using **ESP8266 & Blynk**! 🚀💡
