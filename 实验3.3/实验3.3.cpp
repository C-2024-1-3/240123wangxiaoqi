#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius" << "\t" << "Fahrenheit" << " | " << "Fahrenheit" << "\t" << "Celsius" << endl;
	double F = 120.0, C = 40.0;
	while (C > 30.0 && F > 29.0)
	{
		double f = celsius_to_fah(C);
		double c = fahrenheit_to_cels(F);
		cout << C << "\t" << f << " | " << F << "\t" << c << "\t"<<endl;

		C--;
		F -= 10.0;

	}
	return 0;
}