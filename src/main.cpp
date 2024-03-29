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

    UART.setRPM(0);
    delay(delay_ms);

    UART.setRPM(1723);
    delay(delay_ms);

    UART.setRPM(3446);
    delay(delay_ms);

    UART.setRPM(5169);
    delay(delay_ms);

    UART.setRPM(6893);
    delay(delay_ms);
}

// 02050800000000022D03 
// 020508000006BBBE3B03 
// 02050800000D766A2003 
// 02050800001431EBE803 
// 02050800001AEDC21603 
