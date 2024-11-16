#include<iostream>
using namespace std;
int main()
{
	int r = 0, h = 0;
	float N = 3.14, a = 3.0;
	cout << "请输入半径=" << endl;
	cin >> r;
	cout << "请输入锥高=" << endl;
	cin >> h;
	double v = (N * r * r * h) / a;
	cout << "圆锥体积为" << v;
	return 0;

}