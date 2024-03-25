#include <Arduino.h>
#include <VescUart.h>

VescUart UART;
int delay_ms = 5000;

void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    while (!Serial)
    {
        ;
    }
    UART.setSerialPort(&Serial);
}

void loop()
{
    // put your main code here, to run repeatedly:
    // Serial.println("rpm = 200");

    UART.setRPM(500);
    delay(delay_ms);

    UART.setRPM(1000);
    delay(delay_ms);

    UART.setRPM(2000);
    delay(delay_ms);
}
