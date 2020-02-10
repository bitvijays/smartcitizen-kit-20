# 1 "/tmp/tmpcz4_cH"
#include <Arduino.h>
# 1 "/home/pi/Documents/smartcitizen-kit-20/esp/src/esp.ino"
#include "SckESP.h"

SckESP esp;
void setup();
void loop();
void ledToggle();
time_t ntpProvider();
void extSet(AsyncWebServerRequest *request);
void extStatus(AsyncWebServerRequest *request);
void extRoot(AsyncWebServerRequest *request);
#line 5 "/home/pi/Documents/smartcitizen-kit-20/esp/src/esp.ino"
void setup()
{
 esp.setup();
}
void loop()
{
 esp.update();
}


void ledToggle()
{
 esp._ledToggle();
}
time_t ntpProvider()
{
 return esp.getNtpTime();
}
void extSet(AsyncWebServerRequest *request)
{
 esp.webSet(request);
}
void extStatus(AsyncWebServerRequest *request)
{
 esp.webStatus(request);
}
void extRoot(AsyncWebServerRequest *request)
{
 esp.webRoot(request);
}