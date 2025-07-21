#include <assert.h>
#include <iostream>
using namespace std;

bool IsTempOutOfRange(float temperature)
{
  if (temperature < 0 || temperature > 45)
    return true;
}

bool IsSocOutOfRange(float soc)
{
  if (soc < 20 || soc > 80)
    return true;
}

bool IsChargeRateOutOfRange(float chargeRate)
{
  if (chargeRate > 0.8)
    return true;
}

bool batteryIsOk(float temperature, float soc, float chargeRate)
{
  if (IsTempOutOfRange(temperature))
  {
    cout << "Temperature out of range!\n";
    return false;
  }
  if (IsSocOutOfRange(soc))
  {
    cout << "State of Charge out of range!\n";
    return false;
  }
  if (IsChargeRateOutOfRange(chargeRate))
  {
    cout << "Charge Rate out of range!\n";
    return false;
  }
  return true;
}

int main()
{
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
