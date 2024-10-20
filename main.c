#include <stdio.h>
#include <assert.h>

int main() {
    assert(batteryIsOk(25, 70, 0.7));//no print
    assert(!batteryIsOk(55, 50, 0.2));//temp out of range
    assert(!batteryIsOk(-1, 75, 0.0));//temp out of range
    assert(!batteryIsOk(20, 90, 0.2));//Soc Out of range
    assert(!batteryIsOk(20, 15, 0.2));//Soc Out of range
    assert(!batteryIsOk(25, 25, 0.8));//charge out of range
}
