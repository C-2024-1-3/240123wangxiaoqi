#include<iostream>
using namespace std;
class cub
{
public:
	int length;
	int width;
	int height;
	void get()
	{
		cout << "请输入长" << endl;
		cin>>length;
		cout << "请输入宽" << endl;
		cin >> width;
		cout << "请输入高" << endl;
		cin >> height;
}
	void vol(int l, int w, int h)
	{
		cout << "体积为" << l * w * h << endl;
	}
};
int main()
{
	cub c1;
	c1.get();
	c1.vol(c1.length,c1.width,c1.height);
	return 0;
}