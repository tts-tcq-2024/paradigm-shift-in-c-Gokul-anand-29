#include <stdio.h>
#include "checker.h"

float tolerance_Check(float max){
    return max*0.05; //5% of the max value
}
void warning_check(float value, float tolerance,float upper, float lower, const char* range_name){
    printf("%f %f \n",value,upper - tolerance);
    if(value >= (upper - tolerance)){
        printf("%s approaching peak!", range_name);
    }
    if (value <= (lower + tolerance)) {
        printf("%s approaching discharge!\n", range_name);
    }
}
int isTemperatureOk(float temperature) {
    if(temperature < 0 || temperature > 45)
    {
        printf("Temperature out of range!\n");
        return 0;
    }
    return 1;
}
 
int isSocOk(float soc) {
    if(soc < 20 || soc > 80)
    {
        printf("State of Charge out of range!\n");
      return 0;
    }
    return 1;
}
 
int isChargeRateOk(float chargeRate) {
    if(chargeRate > 0.8)
    {
         printf("Charge Rate out of range!\n");
         return 0;
    }
    return 1;
}
 
int batteryIsOk(float temperature, float soc, float chargeRate) {
    return isTemperatureOk(temperature) && isSocOk(soc) && isChargeRateOk(chargeRate);
}
