#include <assert.h>
#include <iostream>
using namespace std;

bool IsTempOutOfRange(float temperature)
{
  if (temperature < 0 || temperature > 45)
    return true;
  return false;
}

bool IsSocOutOfRange(float soc)
{
  if (soc < 20 || soc > 80)
    return true;
  return false;
}

bool IsChargeRateOutOfRange(float chargeRate)
{
  if (chargeRate > 0.8)
    return true;
  return false;
}

bool batteryIsOk(float temperature, float soc, float chargeRate)
{
  bool tempOut, socOut, chargeRateOut;
  tempOut = socOut = chargeRateOut = false;
  if (IsTempOutOfRange(temperature))
  {
    cout << "Temperature out of range!\n";
    tempOut = true;
  }
  if (IsSocOutOfRange(soc))
  {
    cout << "State of Charge out of range!\n";
    socOut = true;
  }
  if (IsChargeRateOutOfRange(chargeRate))
  {
    cout << "Charge Rate out of range!\n";
    chargeRateOut = true;
  }
  if (tempOut || socOut || chargeRateOut)
  {
    return false;
  }
  return true;
}

int main()
{
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
