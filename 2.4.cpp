#include<iostream>
using namespace std;
int main()
{
	cout << "请输入两个数a b和一个运算符" << endl;
	double a, b;
	char ch;
	cin >> a >> b;
	cin >> ch;
	switch (ch)
	{
	case'+':cout << "a+b=" << a + b;
		break;
	case'-':cout << "a-b=" << a - b;
		break;
	case'*':cout << "a*b=" << a * b;
		break;
	case'/':
	    {
		if (b == 0)
			cout << "0不能做除数" << endl;
		else
		    cout << "a/b=" << a / b;
		break;
	     }
	default:
		cout << "运算符输入错误" << endl;
	}
	

	return 0;
}