//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include<iostream>
#include<string>
using namespace std;
#include"student.h"          //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout<< "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int num_,string name_, char sex_) {
    num = num_;
    name=name_; 
    sex = sex_;
}