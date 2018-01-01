// 基本的输入输出.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//int main()
//{
//	char str[] = "Hello C++";
//	
//	cout << "Value of str is : " << str << endl;
//	
//    return 0;
//}

void main()
{
	char name[50];

	cout << "请输入您的名称：";
	cin >> name;
	cout << "您的名称是：" << name << endl;
}
