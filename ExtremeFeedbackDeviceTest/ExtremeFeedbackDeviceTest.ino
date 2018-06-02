#include <Wire.h>

#define OUT1 12   // ESP8266 (ESP-WROOM-02) IO12
#define OUT2 13   // ESP8266 (ESP-WROOM-02) IO13
#define OUT3 14   // ESP8266 (ESP-WROOM-02) IO14
#define OUT4 4    // ESP8266 (ESP-WROOM-02) IO4

void setup()
{
    Serial.begin(115200);

    Wire.begin();

    delay(500);

    digitalWrite(OUT1, LOW);
    digitalWrite(OUT2, LOW);
    digitalWrite(OUT3, LOW);
    digitalWrite(OUT4, LOW);

    delay(100);

    pinMode(OUT1, OUTPUT);
    pinMode(OUT2, OUTPUT);
    pinMode(OUT3, OUTPUT);
    pinMode(OUT4, OUTPUT);

    Serial.println("    ");
    Serial.println("Ready");

    delay(200);
}

static const uint8_t pins[4] = { OUT1, OUT2, OUT3, OUT4 };

void loop()
{
    for (auto i = 0; i < 4; i++)
    {
        digitalWrite(pins[i], HIGH);

        delay(500);

        digitalWrite(OUT1, LOW);
        digitalWrite(OUT2, LOW);
        digitalWrite(OUT3, LOW);
        digitalWrite(OUT4, LOW);
    }
}

