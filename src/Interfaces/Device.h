#pragma once
class LEDDisplay;

class Device {
public:
    virtual int listen() = 0;
    virtual int getDisplayWidth() = 0;
    virtual int getDisplayHeight() = 0;
    virtual void updateLEDDisplay(LEDDisplay*) = 0;
};  