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
		cout << "�����볤" << endl;
		cin>>length;
		cout << "�������" << endl;
		cin >> width;
		cout << "�������" << endl;
		cin >> height;
}
	void vol(int l, int w, int h)
	{
		cout << "���Ϊ" << l * w * h << endl;
	}
};
int main()
{
	cub c1;
	c1.get();
	c1.vol(c1.length,c1.width,c1.height);
	return 0;
}