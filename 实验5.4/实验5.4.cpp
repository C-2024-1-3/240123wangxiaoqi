#include<iostream>
using namespace std;
class student
{
public:
	int num;
	int score;
	student(int n, int s): num(n), score(s) {};
};
void max(const student*s,int len)
{
	const student* max = s;
	for (int i = 0; i < len; i++)
	{
		if (s[i].score > max->score)
		{
			max =&s[i];
		}
	}
	cout << "最高成绩者学号为" << max->num;
};
int main()
{
	student stu[5] =
	{
		student(1,89),
	    student(2,92),
		student(3, 90),
		student(4, 95),
		student(5, 91)
	};
	max(stu, 5);
	return 0;
}