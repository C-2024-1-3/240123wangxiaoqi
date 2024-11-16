#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "输入三角形三边a,b,c" << endl;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || c + b <= a)
	{
		cout << "无法构成三角形" << endl;
	}
	else
	   {cout << "三角形周长为" << a + b + c << endl;
	if (a == b || b == c || a == c)
	{
		cout << "该三角形为等腰三角形" << endl;
	}
		   else
		   {cout << "该三角形不是等腰三角形" << endl;
		   }
	    }
	return 0;
}