#include"mytemperature.h"
#include <iomanip>
double celsius_to_fah(double cel)
{
	cout << fixed << setprecision(1);
	return(9.0 / 5.0) * cel + 32.0;
};
double fahrenheit_to_cels(double fah)
{
	cout << fixed << setprecision(2);
	return(5.0 / 9.0) * (fah - 32.0);
};
