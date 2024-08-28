#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  float temp_min = 0;
  float temp_max = 45;
  float soc_min = 20;
  float soc_max = 80;
  float charge = 0.8;
  int battery_ok =1;
  
  if (temperature < temp_min || temperature > temp_max || soc < soc_min || soc > soc_max || chargeRate > charge) {
        printf("Battery parameters out of range!\n");
        battery_ok = 0;
    }

    return battery_ok;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
