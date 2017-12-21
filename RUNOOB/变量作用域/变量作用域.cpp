// 变量作用域.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// 全局变量声明
int g = 20;
int e;
char f;
float j;
double h;
long *l;

int main()
{
	//cout << g << endl;

	// 局部变量声明
	int a, b;
	int c;
	int g = 10;

	// 实际初始化
	a = 10;
	b = 20;
	//c = a + b;
	//g = a + b;

	cout << g << endl;
	cout << e << endl;
	cout << f << endl;
	cout << j << endl;
	cout << h << endl;
	cout << l << endl;

	return 0;
}

