#include<iostream>
using namespace std;
int m(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
};
int main()
{
	int a, b;
	cout<<"������������a��b" << endl;
	cin >>a>> b;
	int r = m(a, b);
	cout << "a��b���Լ��Ϊ" <<r <<endl;
	
	cout << "a��b����С������Ϊ" << (a * b) / r;
	return 0;
}