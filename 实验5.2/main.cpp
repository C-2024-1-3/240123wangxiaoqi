//main.cpp                      主函数模块
#include <iostream>   
#include<string>//将类声明头文件包含进来
using namespace std;
#include"student.h"
int main()
{
	Student stud;                //定义对象
	stud.set_value(007, "tcg", 'm');
	stud.display();              //执行stud对象的display函数
	return 0;
}