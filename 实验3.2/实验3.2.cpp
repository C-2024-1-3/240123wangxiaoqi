#include<iostream>
using namespace std; 
bool is_prime(int num)
{
	if (num <= 1)
	{
		return false;
	}
	else
	{
		int j = 0;
		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
			{
				j++;
			}
		}
		if (j == 2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
};
int main()
{
	int N = 1;
	int i = 2;
	int line = 0;
	while (N <= 200)
	{

		
		if (is_prime(i))
		{
			cout << i<<" ";
			N++;
			line++;
			if (line == 10)
			{
				cout << endl;
				line = 0;
			}
		}
		i++;
	};
	return 0;
}