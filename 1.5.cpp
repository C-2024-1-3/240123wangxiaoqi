#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f, c;
	cout << "���뻪���¶ȣ�";
	cin >> f;
	cout << fixed << setprecision(2);
	c = 5.0 / 9.0 * (f - 32);
	cout<<"�����¶�Ϊ��" << c << endl;
	return 0;
}