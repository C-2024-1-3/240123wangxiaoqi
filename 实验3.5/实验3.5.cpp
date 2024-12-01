#include<iostream>
using namespace std;
int monkey(int a)
{
	if (a == 10)
	{
		return 1;
	}
	else
	{
		return (monkey(a + 1) + 1) * 2;
	}
}
int main()
{
	cout << "第一天摘了" << monkey(1);
	return 0;
}