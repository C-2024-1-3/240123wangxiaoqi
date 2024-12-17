#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:            // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:	
	void gettime(int hour_t,int minute_t,int sec_t)
	{
		hour=hour_t;      //输入设定的时间 
		minute=minute_t;
		sec=sec_t;
    }
	void time_()
	{
		cout <<hour << ";" << minute <<";" << sec << endl;
	}
};
int main()
{
	Time t1;
	int h, m, s;
	cin >> h;      //输入设定的时间 
	cin >> m;
	cin >> s;
	t1.gettime(h, m,s);
	t1.time_();
	return 0;
}