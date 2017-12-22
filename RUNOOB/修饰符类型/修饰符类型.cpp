// 修饰符类型.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>;
using namespace std;

int main()
{
	unsigned x;
	unsigned int y;
	unsigned long z;

	short int i;	// 有符号短整数
	short unsigned int j;	// 无符号短整数

	j = 50000;
	i = j;
	cout << i << endl;
	cout << j << endl;

    return 0;
}

