// 第二章02指针.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//int main()
//{
//	int a = 324;
//	int b = 100;
//	string str = "hello";
//	
//	int* pA;	// int * pA; int *pA;
//	pA = &a;
//	cout << pA << endl;
//	cout << &a << endl;
//	cout << *pA << endl;
//
//	pA = &b;
//	cout << pA << endl;
//	cout << &b << endl;
//	cout << *pA << endl;
//
//	*pA = 300;
//	cout << b << endl;
//	cout << *pA << endl;
//
//	void* p1 = &str;
//	p1 = &a;
//	cout << p1 << endl;
//	cout << (int*)p1 << endl;
//	cout << *((int*)p1) << endl;
//
//	int* p2 = NULL;
//	cout << p2 << endl;
//	p2 = &a;
//	cout << *p2 << endl;
//
//    return 0;
//}

void change(int& x, int y)
{
	//int& x = a;
	x = 1000;
	y = 2000;
}

void main()
{
	//int a = 100;
	//int b = 200;

	//int* p1 = &a;
	//cout << p1 << endl;
	//p1 = &b;
	//cout << p1 << endl;

	//int& r1 = a;
	//cout << &r1 << endl;
	//cout << r1 << " a: " << a << endl;
	//r1 = b;	// a = b;
	//cout << &r1 << endl;
	//cout << r1 << " a: " << a << endl;
	//b = 400;
	//cout << r1 << " a: " << a << endl;
	//a = 300;
	//cout << r1 << " a: " << a << endl;

	//p1 = &r1;
	//cout << p1 << endl;
	//cout << *p1 << endl;
	//r1 = b;
	//cout << r1 << " a: " << a << endl;
	//cout << *p1 << endl;


	int a = 0, b = 0;
	change(a, b);

	cout << a << endl;
	cout << b << endl;

}