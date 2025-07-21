#include <assert.h>
#include <iostream>
using namespace std;

bool isTempOutOfRange(float temperature)
{
  if (temperature < 0 || temperature > 45)
  {
    cout << "Temperature out of range!\n";
    return true;
  }
  return false;
}

bool isSocOutOfRange(float soc)
{
  if (soc < 20 || soc > 80)
  {
    cout << "State of Charge out of range!\n";
    return true;
  }
  return false;
}

bool isChargeRateOutOfRange(float chargeRate)
{
  if (chargeRate > 0.8)
  {
    cout << "Charge Rate out of range!\n";
    return true;
  }
  return false;
}

bool batteryIsOk(float temperature, float soc, float chargeRate)
{
  if (!(isTempOutOfRange(temperature)) && !(isSocOutOfRange(soc)) && !(isChargeRateOutOfRange(chargeRate)))
  {
    return true;
  }
  return false;
}

int main()
{
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
