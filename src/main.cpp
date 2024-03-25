#include <Arduino.h>
#include <VescUart.h>

VescUart UART;

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
    delay(1000);

    UART.setRPM(1000);
    delay(1000);

    UART.setRPM(2000);
    delay(1000);
}
