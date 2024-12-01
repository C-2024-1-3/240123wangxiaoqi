#include<iostream>
#include<string>
using namespace std;
int parseHex(const char* const hexString)
{
	int num = 0;
	int s = 1;
	int len = strlen(hexString);
	for (int i = len - 1; i >= 0; i--)
	{
		char num_16 = hexString[i];
		int num_10 = 0;
		if (num_16 >= '0' && num_16 <= '9')
		{
			num_10 = num_16-'0';
		}
		else if (num_16 >= 'A' && num_16 <= 'F')
		{
			num_10 = 10 + num_16 - 'A';
		}
		else if (num_16 >= 'a' && num_16 <= 'f')
		{
			num_10 = 10 + num_16 - 'a';
		}
		num += num_10 * s;
		s *= 16;
	}
	return num;
}
int main()
{
	const int MAX = 100;
	char* s1 = new char[MAX];
	cin.getline(s1, MAX);
	cout << parseHex(s1);
	
	delete[]s1;
	return 0;
}