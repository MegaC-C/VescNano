#include <Arduino.h>
#include <VescUart.h>

VescUart UART;
float myRpm = 200.0;

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
    UART.setRPM(myRpm);
    
    delay(1000);
}
