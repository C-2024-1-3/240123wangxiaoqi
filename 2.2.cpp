#include<iostream>
using namespace std;
int main()
{
	cout << "please give me a x" << endl;
	float x = 0;
	cin >> x;
	if (0 < x && x < 1)
	{
		cout << "answer=" << 3 - 2 * x;
	}
	if (1 <= x && x < 5)
	{
		cout << "answer=" << 2 / (4 * x) + 1;
	}
	if (5 <= x && x < 10)
	{
		cout << "answer=" << x * x;
	}
	return 0;
}