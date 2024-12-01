#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; ++i)
	{
		counts[i] = 0;
	}
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (int(s[i]) > 64 && int(s[i]) < 91)
		{
			counts[int(s[i]) - 65]++;
		}
		else if (int(s[i])>96&& int(s[i])<123)
		{
			counts[int(s[i]) - 97]++;
		};
				
	}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i]!=0)
		{
			cout << static_cast<char>(i + 65) << ":" << counts[i] << "times" << endl;

		}
	}
}


int main()
{
	const int MAX = 100;
	char* s = new char[MAX];
	cout << "Enter a string:";
	cin.getline(s, MAX);
	int counts[26];
	count(s, counts);
	delete[]s;
	return 0;

}