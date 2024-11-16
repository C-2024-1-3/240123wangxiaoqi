#include <iostream>
using namespace std;
int main()
{
	float const a = 0.8;
	int num1 = 2, sum1 = 0, day1 = 0;
	while(num1<=100)
	{
		sum1 += num1;
		num1 = num1 * 2;
		day1 = day1 + 1;
	
	} 
	cout << sum1<< " " << day1<<endl;
	
		cout << "平均每天花" << sum1 * a / day1<< "钱";
	return 0;
}