// 数据类型.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

typedef int feet;

int main()
{
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;
	cout << "Size of long int: " << sizeof(long int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	feet distance = 100;
	cout << distance << endl;
	
	enum color { red, greed = 5, blue } c;
	c = blue;
	cout << c << endl;

	return 0;
}

