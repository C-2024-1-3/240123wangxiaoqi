#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int arrt[10];
	int num = 0;
	int a = 0;
	cout << "给我十个数" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arrt[i];

	};
	for (int j = 0; j < 10; j++)
	{
		a = 0;
		for (int k = 0; k < j; k++)
		{
			if (arrt[j] == arrt[k])
			{
				a++;
			}
		}
		if (a == 0)
		{
			arr[num] = arrt[j];
			num++;
		}
	}
	cout << "输出" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}