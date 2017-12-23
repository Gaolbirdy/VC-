// 函数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//int max(int, int);
////int max(int num1, int num2);
//
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int ret;
//
//	ret = max(a, b);
//	cout << ret << endl;
//
//	return 0;
//}
//
//int max(int num1, int num2)
//{
//	int result;
//
//	if (num1 > num2)
//	{
//		result = num1;
//	}
//	else
//	{
//		result = num2;
//	}
//
//	return result;
//}

//void swap(int*, int*);
//void swap(int *, int *);
//void swap(int *x, int *y);
//
//void main()
//{
//	int a = 100;
//	int b = 200;
//
//	cout << "交换前, a 的值：" << a << endl;
//	cout << "交换前, b 的值：" << b << endl;
//
//	//swap(a, b);
//	/* 调用函数来交换值
//	* &a 表示指向 a 的指针，即变量 a 的地址
//	* &b 表示指向 b 的指针，即变量 b 的地址
//	*/
//	swap(&a, &b);
//
//	cout << "交换后, a 的值：" << a << endl;
//	cout << "交换后, b 的值：" << b << endl;
//
//}
//
//void swap(int *x, int *y)
//{
//	int temp;
//
//	temp = *x;	// 保存地址 x 的值
//	*x = *y;	// 把 y 赋值给 x
//	*y = temp;	// 把 x 赋值给 y
//}

//void swap(int&, int&);
//void swap(int &, int &);
//void swap(int &x, int &y);
//
//void main()
//{
//	int a = 100;
//	int b = 200;
//
//	cout << "交换前, a 的值：" << a << endl;
//	cout << "交换前, b 的值：" << b << endl;
//
//	//swap(a, b);
//	swap(a, b);
//
//	cout << "交换后, a 的值：" << a << endl;
//	cout << "交换后, b 的值：" << b << endl;
//
//}
//
//void swap(int &x, int &y)
//{
//	int temp;
//
//	temp = x;
//	x = y;
//	y = temp;
//}


int sum(int a, int b = 20)
{
	int result;
	result = a + b;
	return(result);
}

void main()
{
	int a = 100;
	int b = 200;
	int result;

	result = sum(a, b);
	cout << "Total value is : " << result << endl;

	result = sum(a);
	cout << "Total value is : " << result << endl;

	//[](int x, int y) { return x < y; };


	// 定义简单的lambda表达式
	auto basicLambda = [] {cout << "Hello, world!" << endl; };
	// 调用
	basicLambda();

	// 指明返回类型
	auto add = [](int a, int b)->int {return a + b; };

	// 自动推断返回值类型
	auto multiply = [](int a, int b) {return a*b; };

	int sum = add(2, 5);
	int product = multiply(2, 5);

	cout << sum << endl;
	cout << product << endl;
}

