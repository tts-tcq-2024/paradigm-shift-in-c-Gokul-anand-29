#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  int Battery_ok;
  if(temperature < 0 || temperature > 45) {
    printf("Temperature out of range!\n");
    Battery_ok = 0;
  } else if(soc < 20 || soc > 80) {
    printf("State of Charge out of range!\n");
    Battery_ok = 0;
  } else if(chargeRate > 0.8) {
    printf("Charge Rate out of range!\n");
    Battery_ok = 0;
  }
  else{
    Battery_ok = 1;
  } 
  return Battery_ok;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
