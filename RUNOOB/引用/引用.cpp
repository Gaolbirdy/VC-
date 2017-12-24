// 引用.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//int main()
//{
//	int i = 17;
//	int &r = i;
//	int *p = &r;
//	int a = r;
//	int b = *p;
//
//	r = 100;
//
//	cout << "r: " << r << endl;
//	cout << "i: " << i << endl;
//	cout << "&r: " << &r << endl;
//	cout << "&i: " << &i << endl;
//	cout << "a: " << a << endl;
//	cout << "&a: " << &a << endl;
//	cout << "b: " << b << endl;
//	cout << "&b: " << &b << endl;
//
//	cout << "*p: " << *p << endl;
//	cout << "p: " << p << endl;
//    return 0;
//}

//void main()
//{
//	// 声明简单的变量
//	int i;
//	double d;
//
//	// 声明引用变量
//	int &r = i;
//	double &s = d;
//
//	i = 5;
//	cout << "Value of i : " << i << endl;
//	cout << "Value of i reference : " << r << endl;
//	cout << "Address of i : " << &i << endl;
//	cout << "Address of i reference : " << &r << endl;
//
//	d = 11.7;
//	cout << "Value of d : " << d << endl;
//	cout << "Value of d reference : " << s << endl;
//	cout << "Address of d : " << &d << endl;
//	cout << "Address of d reference : " << &s << endl;
//
//	r = 50;
//	cout << "Value of i : " << i << endl;
//	cout << "Value of i reference : " << r << endl;
//
//	s = 117;
//	cout << "Value of d : " << d << endl;
//	cout << "Value of d reference : " << s << endl;
//}


//void swap(int &, int &);
//
//void main()
//{
//	int a = 100;
//	int b = 200;
//
//	cout << &a << endl;
//	cout << &b << endl;
//
//	cout << "交换前，a的值： " << a << endl;
//	cout << "交换前，b的值： " << b << endl;
//
//	swap(a, b);
//	cout << "交换后，a的值： " << a << endl;
//	cout << "交换后，b的值： " << b << endl;
//}
//
//void swap(int &x, int &y)
//{
//	int temp;
//	temp = x;	// 保存地址 x 的值
//	x = y;	// 把 y 赋值给 x
//	y = temp;	// 把 x 赋值给 y
//
//	cout << &x << endl;
//	cout << &y << endl;
//}

double vals[] = { 10.1,12.6,33.1,24.1,50.0 };

// 当函数返回一个引用时，则返回一个指向返回值的隐式指针。这样，函数就可以放在赋值语句的左边
double & setValues(int i)
{
	return vals[i];	// 返回第 i 个元素的引用
}

void main()
{
	cout << "改变前的值" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}

	cout << &vals[3] << endl;
	cout << &setValues(3) << endl;

	setValues(1) = 20.23; // 改变第2个元素
	setValues(3) = 70.8; // 改变第4个元素

	cout << "改变后的值" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}
}

int & func()
{
	int q;
	return q;	// 在编译时发生错误?

	static int x;
	return x;	// 安全，x 在函数作用域外依然是有效的
}