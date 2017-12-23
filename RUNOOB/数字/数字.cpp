// 数字.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

//int main()
//{
//	short s;
//	int i;
//	long l;
//	float f;
//	double d;
//
//	s = 10;
//	i = -1000;
//	l = 100000;
//	f = 230.47;
//	d = 200.374;
//
//	/*cout << "short s :" << s << endl;
//	cout << "int i :" << i << endl;
//	cout << "long l :" << l << endl;
//	cout << "float f :" << f << endl;
//	cout << "double d :" << d << endl;*/
//
//
//	cout << "sin(d) :" << sin(d) << endl;
//	cout << "abs(i) :" << abs(i) << endl;
//	cout << "floor(d) :" << floor(d) << endl;
//	cout << "sqrt(f) :" << sqrt(f) << endl;
//	cout << "pow(d, 2) :" << pow(d, 2) << endl;
//
//    return 0;
//}

void main()
{
	int i, j;

	// 设置种子
	srand((unsigned)time(NULL));

	// 生成10个随机数
	for (i = 0; i < 10; i++)
	{
		// 生成实际的随机数
		j = rand();
		cout << "随机数： " << j << endl;
	}
}
