// 06控制台输出与输入.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool RunCalculator();

void main()
{
	cout << "计算器!" << endl;

	while (true)
	{
		bool isContinue = RunCalculator();
		if (!isContinue)
		{
			break;
		}
	}
}

bool RunCalculator()
{
	int operator1;

	cout << "请输入第一个数字：";
	cin >> operator1;

	int operator2;

	cout << "请输入第二个数字：";
	cin >> operator2;

	int res = operator1 + operator2;
	cout << "和为：" << res << endl << endl;

	cout << "继续计算吗？ (y/n)" << endl << endl;
	char c;
	cin >> c;
	if (c == 'y')
	{
		return true;
	}
	else
	{
		return false;
	}
}

