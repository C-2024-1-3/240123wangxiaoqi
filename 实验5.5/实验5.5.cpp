#include<iostream>
using namespace std;
class point

{
	
private:
	int x;
	int y;
	
public:
	point()
	{
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
}
	void display()
	{
		cout << "点的坐标为" << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point p1;
	p1.setPoint(10, 10);
	p1.display();
	return 0;
}