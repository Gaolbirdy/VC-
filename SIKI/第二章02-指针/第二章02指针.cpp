// 第二章02指针.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a = 324;
	int b = 100;
	string str = "hello";
	
	int* pA;	// int * pA; int *pA;
	pA = &a;
	cout << pA << endl;
	cout << &a << endl;
	cout << *pA << endl;

	pA = &b;
	cout << pA << endl;
	cout << &b << endl;
	cout << *pA << endl;

	*pA = 300;
	cout << b << endl;
	cout << *pA << endl;

	void* p1 = &str;
	p1 = &a;
	cout << p1 << endl;
	cout << (int*)p1 << endl;
	cout << *((int*)p1) << endl;

	int* p2 = NULL;
	cout << p2 << endl;
	p2 = &a;
	cout << *p2 << endl;

    return 0;
}

