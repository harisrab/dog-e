#include 

void dmpDataReady()
{
    mpuInterrupt = true;
}

void setupIMU()
{
    // initialize device
    Serial.println(F("Initializing I2C devices..."));
    mpu.initialize();
}