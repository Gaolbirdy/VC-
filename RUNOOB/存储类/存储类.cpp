// 存储类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


// 函数声明
void func(void);

static int counts = 10;	// 全局变量

int main()
{
	//auto f = 3.14;	//	double
	//auto s("Hello");	// const char*
	//auto z = new auto(9);	// int*
	//auto c('C');
	////auto x1 = 5, x2 = 50.0, x3 = 'r';	//错误，必须是初始化为同一类型
	//cout << f << endl;
	//cout << s << endl;
	//cout << z << endl;
	//cout << c << endl;

	//register int miles = 100;
	//cout << miles << endl;

	/*int count = 5;
	while (count--)
	{
		cout << count << endl;
	}
	cout << count << endl;*/

	while (counts--)
	{
		func();
	}

    return 0;
}

// 函数定义
void func(void)
{
	static int i = 5;	// 局部静态变量
	i++;
	cout << "变量 i 为 " << i;
	cout << "，变量 count 为 " << counts << endl << endl;
}

