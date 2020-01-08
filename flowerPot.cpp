#include <Arduino.h>
#include "flowerPot.h"

flowerPot::flowerPot(int valve, int sensor){
  _valve=valve;
  _sensor=sensor;
  _moist = analogRead(_sensor);
  pinMode(_valve, OUTPUT);
  digitalWrite(_valve, VALVECLOSED);
  _timeStamp = millis();
}

flowerPot::flowerPot(int valve, int sensor, int threshold){
  _valve=valve;
  _sensor=sensor;
  _threshold=threshold;
  _moist = analogRead(_sensor);
  pinMode(_valve, OUTPUT);
  digitalWrite(_valve, VALVECLOSED);
  _timeStamp = millis();
}

bool flowerPot::giveCare(){
  unsigned int now = millis();
  if(now - _timeStamp >= INTERVAL){
    _moist = analogRead(_sensor);
    _timeStamp = now;
    Serial.println(_moist);
  }
  return false;
}
int flowerPot::getThreshold(){
  return _threshold;
}
void flowerPot::setThreshold(int threshold){
  _threshold = threshold;
}
void flowerPot::endCare(){
  
}
void flowerPot::startCare(){
  
}
