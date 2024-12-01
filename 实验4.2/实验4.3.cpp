#include<iostream>
using namespace std;
int main()
{
	double arr[10] = { 2.64,5.33,54.00,3.5,53.2,34.5,28.8,543.0,39.0,43.9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
				

		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}