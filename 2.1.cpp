#include<iostream>
using namespace std;
int main()
{
	char letter;
	cin>>letter;
	if (letter >= 'a' && letter <= 'z')
	{
		char fix = static_cast<char>((letter - 32));
		cout << fix;
	}
	if(letter >= 'A' && letter <= 'Z')
	{
		cout << "ASCII=" << static_cast<int>(letter)+1;
	}


	
	return 0;
}