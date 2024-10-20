#ifndef CHECKER_H
#define CHECKER_H

int isTemperatureOk(float temperature);
int isSocOk(float soc);
int isChargeRateOk(float chargeRate);
int batteryIsOk(float temperature, float soc, float chargeRate);

#endif // CHECKER_H
