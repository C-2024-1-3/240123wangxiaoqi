//main.cpp                      ������ģ��
#include <iostream>   
#include<string>//��������ͷ�ļ���������
using namespace std;
#include"student.h"
int main()
{
	Student stud;                //�������
	stud.set_value(007, "tcg", 'm');
	stud.display();              //ִ��stud�����display����
	return 0;
}