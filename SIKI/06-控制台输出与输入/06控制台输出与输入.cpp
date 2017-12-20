// 06控制台输出与输入.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "计算器!" << endl;

	int operator1;

	cout << "请输入第一个数字：";
	cin >> operator1;

	int operator2;

	cout << "请输入第二个数字：";
	cin >> operator2;

	int res = operator1 + operator2;
	cout << "两个数字的和为：" << res << endl;
	
	return 0;
}

