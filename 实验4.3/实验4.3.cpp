#include<iostream>
using namespace std;
int main()
{
	bool boolarr[100];
	for (int i = 0; i < 100; i++)
	{
		boolarr[i] = false;//0Ϊ����1Ϊ��
	}
	for (int j = 2; j <= 100; j++)
	{
		for (int k = j-1; k < 100; k = k + j)
		{
			boolarr[k] = !boolarr[k];
		}
	}
	cout << "���ŵĹ���Ϊ";
	for (int i = 0; i < 100; i++)
	{
		if (boolarr[i] == 0)
		{
			cout << i +1<< " ";
		}
	}
	return 0;
}