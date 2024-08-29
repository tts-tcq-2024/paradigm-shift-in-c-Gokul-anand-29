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
 int battery_ok =  1;
    if (!isTemperatureOk(temperature)) {
        printf("Temperature out of range!\n");
        battery_ok = 0;
    } 
    if (!isSocOk(soc)) {
        printf("State of Charge out of range!\n");
        battery_ok = 0;
    } 
    if (!isChargeRateOk(chargeRate)) {
        printf("Charge Rate out of range!\n");
        battery_ok = 0;
    }
    return battery_ok;
}

int main() {
    assert(batteryIsOk(25, 70, 0.7));
    assert(!batteryIsOk(50, 85, 0));
    return 0;
}
