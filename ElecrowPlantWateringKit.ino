#include "flowerPot.h"

flowerPot jar1(3, A0);
flowerPot jar2(4, A1);
flowerPot jar3(5, A2);
flowerPot jar4(6, A3);
void setup(){
  Serial.begin(9600);
}

void loop(){
  jar1.giveCare();
  jar2.giveCare();
  jar3.giveCare();
  jar4.giveCare();
}
