#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "��������������a,b,c" << endl;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || c + b <= a)
	{
		cout << "�޷�����������" << endl;
	}
	else
	   {cout << "�������ܳ�Ϊ" << a + b + c << endl;
	if (a == b || b == c || a == c)
	{
		cout << "��������Ϊ����������" << endl;
	}
		   else
		   {cout << "�������β��ǵ���������" << endl;
		   }
	    }
	return 0;
}