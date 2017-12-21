// 常量.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

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


    return 0;
}

