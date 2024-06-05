#include "CompoundIntRateCalculator.h"
#include <iostream>

int main() {
	CompoundIntRateCalculator cIRCalc(0.06);
	double res = cIRCalc.multiplePeriod(2000, 12);

	double contRes = cIRCalc.continuousCompounding(2000, 12);
	std::cout << " future value for multiple period compounding is " << res << std::endl;
	std::cout << " future value for continuous compounding is " << contRes << std::endl;
	
	return 0;
}
