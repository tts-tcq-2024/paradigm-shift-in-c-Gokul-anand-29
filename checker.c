#include <stdio.h>
#include <assert.h>

int isTemperatureOk(float temperature) {
    return temperature >= 0 && temperature <= 45;
}

int isSocOk(float soc) {
    return soc >= 20 && soc <= 80;
}

int isChargeRateOk(float chargeRate) {
    return chargeRate <= 0.8;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
    int check = (!isTemperatureOk(temperature) || !isSocOk(soc) || !isChargeRateOk(chargeRate)) ;
     if (check) {
        printf("One or more parameter is out of range!\n");
         return 0;
    } 
       return 1;
}

int main() {
    assert(batteryIsOk(25, 70, 0.7));
    assert(!batteryIsOk(50, 85, 0));
}
