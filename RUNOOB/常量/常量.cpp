// 常量.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//#define LENGTH 10
//#define WIDTH 5
//#define NEWLINE '\n'

int main()
{
	cout << 212 << endl;	// 合法的
	cout << 215u << endl;	// 合法的
	cout << 0xFeeL << endl;	// 合法的
	//cout << 078 << endl;	// 非法的：8 不是八进制的数字
	//cout << 032UU << endl;	//非法的：不能重复后缀

	cout << 85 << endl;	// 十进制
	cout << 0213 << endl;	// 八进制
	cout << 0x4b << endl;	// 十六进制
	cout << 30 << endl;	// 整数
	cout << 30u << endl;	// 无符号整数
	cout << 30l << endl;	// 长整数
	cout << 30ul << endl;	// 无符号长整数

	cout << 3.14159 << endl;	// 合法的
	cout << 314159E-5L << endl;	// 合法的
	//cout << 510E << endl;	// 非法的：不完整的指数
	//cout << 210f << endl;	// 非法的：没有小数或指数
	//cout << .e55 << endl;	// 非法的：缺少整数或分数

	wchar_t wc = L'x';
	char c = L'x';
	char x = 'x';
	cout << wc << endl;
	cout << c << endl;
	cout << x << endl;
	cout << '\u02C0' << endl;

	cout << "Hello\tWorld\n\n";

	cout << "hello, dear" << endl;
	cout << "hello, \
	dear" << endl;
	cout << "hello, " "d" "ear" << endl;

	const int LENGTH = 10;
	const int WIDTH = 5;
	const char NEWLINE = 10;
	int area;

	area = LENGTH * WIDTH;
	cout << area << endl;
	cout << NEWLINE;

    return 0;
}

