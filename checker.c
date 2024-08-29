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
    int temp_ok = !isTemperatureOk(temperature);
    int soc_ok = !isSocOk(soc);
    int charge_ok = !isChargeRateOk(chargeRate);
    
    display(temp_ok, soc_ok, charge_ok);
    
    return temp_ok && soc_ok && charge_ok;
}

int display( int temp, int soc, int charge){
    
    if(temp){
        printf("Temperature out of range!\n");
    }
    else if(soc){
        printf("State of Charge out of range!\n");
    }
    else{
        printf("Charge Rate out of range!\n");
    }
    return 1;
}

int main() {
    assert(batteryIsOk(25, 70, 0.7));
    assert(!batteryIsOk(50, 85, 0));
    assert(batteryIsOk(25, 50, 0.2));
}
