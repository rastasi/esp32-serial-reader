#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  Serial.println("Hello World!");

  uint64_t chipid;

  chipid = ESP.getEfuseMac();                                     
  Serial.printf("ESP32 Chip ID = %04X", (uint16_t)(chipid >> 32));
  Serial.printf("%08X\n", (uint32_t)chipid);
  char ssid[23];

  snprintf(ssid, 23, "MCUDEVICE-%llX", ESP.getEfuseMac());
  Serial.println(ssid);
}

void loop()
{

}
