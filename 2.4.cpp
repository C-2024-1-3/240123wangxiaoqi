#include<iostream>
using namespace std;
int main()
{
	cout << "������������a b��һ�������" << endl;
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
			cout << "0����������" << endl;
		else
		    cout << "a/b=" << a / b;
		break;
	     }
	default:
		cout << "������������" << endl;
	}
	

	return 0;
}