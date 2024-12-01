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
	cout<<"请输入两个数a和b" << endl;
	cin >>a>> b;
	int r = m(a, b);
	cout << "a和b最大公约数为" <<r <<endl;
	
	cout << "a和b的最小公倍数为" << (a * b) / r;
	return 0;
}