#ifndef FLOWERPOT_H
#define FLOWERPOT_H
#include <Arduino.h>

#define VALVEOPEN HIGH
#define VALVECLOSED LOW
#define INTERVAL 3000 //Interval for measurement
class flowerPot
{
  public:
    flowerPot(int valve, int sensor);
    flowerPot(int valve, int sensor, int threshold);
    bool giveCare();
    int getThreshold();
    void setThreshold(int threshold);
    void endCare();
    void startCare();
  private:
    int _valve, _sensor, _threshold = 512, _moist;  
    unsigned long _timeStamp;
    int _state;
};




#endif
