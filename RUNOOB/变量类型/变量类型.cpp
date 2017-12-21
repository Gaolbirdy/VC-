// 变量类型.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//extern int d = 3, f = 5;

// 变量声明
extern int a, b;
extern int c;
extern float f;

// 函数声明
int func();

int main()
{
	//int i, j, k;
	//char c, ch;
	//float f, salary;
	//double d;
	//int d = 3, f = 5;
	//byte z = 22;
	//char x = 'x';

	// 变量定义
	int a, b;
	int c;
	float f;

	// 实际初始化
	a = 10;
	b = 20;
	c = a + b;

	cout << c << endl;

	f = 70.0 / 3.0;
	cout << f << endl;
	
	// 函数调用
	int i = func();
	cout << i << endl;

	return 0;
}

// 函数定义
int func()
{
	return 0;
}

