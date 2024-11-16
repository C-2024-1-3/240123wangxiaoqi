#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f, c;
	cout << "输入华氏温度：";
	cin >> f;
	cout << fixed << setprecision(2);
	c = 5.0 / 9.0 * (f - 32);
	cout<<"摄氏温度为；" << c << endl;
	return 0;
}