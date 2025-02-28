// Include the library files
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_AUTH_TOKEN "" // Enter your Blynk auth token
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = ""; // Enter your Wi-Fi name
char pass[] = ""; // Enter your Wi-Fi password

// LED pin definitions
#define LED1 D0
#define LED2 D1
#define LED3 D2
#define LED4 D3
#define LED5 D4

// Blynk virtual button handlers
BLYNK_WRITE(V0) { digitalWrite(LED1, param.asInt()); }
BLYNK_WRITE(V1) { digitalWrite(LED2, param.asInt()); }
BLYNK_WRITE(V2) { digitalWrite(LED3, param.asInt()); }
BLYNK_WRITE(V3) { digitalWrite(LED4, param.asInt()); }
BLYNK_WRITE(V4) { digitalWrite(LED5, param.asInt()); }

void setup() {
  // Set LED pins as output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);

  // Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  // Run the Blynk library
  Blynk.run();
}
