#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  float temp_min = 0;
  float temp_max = 45;
  float soc_min = 20;
  float soc_max = 80;
  float charge = 0.8;
  
  if (temperature < temp_min || temperature > temp_max ||
        soc < soc_min || soc > soc_max ||
        chargeRate > charge) {
        printf("Battery parameters out of range!\n");
        return 0;
    }

    return 1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
