//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
using namespace std;
#include<iostream>
#include<string>
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int num_, string name_, char sex_);
	
private:
	int num;
	string name;
	char sex;
};