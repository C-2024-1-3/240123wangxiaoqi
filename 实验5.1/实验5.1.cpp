#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:            // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:	
	void gettime(int hour_t,int minute_t,int sec_t)
	{
		hour=hour_t;      //�����趨��ʱ�� 
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
	cin >> h;      //�����趨��ʱ�� 
	cin >> m;
	cin >> s;
	t1.gettime(h, m,s);
	t1.time_();
	return 0;
}