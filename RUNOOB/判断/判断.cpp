// 判断.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//int main()
//{
//	int a = 10;
//
//	if (a < 20)
//	{
//		cout << "a 小于 20" << endl;
//	}
//	cout << "a 的值是 " << a << endl;
//
//    return 0;
//}


//void main()
//{
//	int a = 100;
//	
//	if (a < 20)
//	{
//		cout << "a 小于 20" << endl;
//	}
//	else
//	{
//		cout << "a 大于等于 20" << endl;
//	}
//	cout << "a 的值是 " << a << endl;
//}

//void main()
//{
//	int a = 100;
//
//	if (a == 10)
//	{
//		cout << "a 的值是 10" << endl;
//	}
//	else if (a == 20)
//	{
//		cout << "a 的值是 20" << endl;
//	}
//	else if (a == 30)
//	{
//		cout << "a 的值是 30" << endl;
//	}
//	else
//	{
//		cout << "没有匹配的值" << endl;
//	}
//	cout << "a 的准确值是 " << a << endl;
//}

//void main()
//{
//	int a = 100;
//	int b = 200;
//
//	if (a == 100)
//	{
//		if (b == 200)
//		{
//			cout << "a 的值是 100， 且b的值是 200" << endl;
//		}
//	}
//	cout << "a 的准确值是 " << a << endl;
//	cout << "b 的准确值是 " << b << endl;
//}

//void main()
//{
//	char grade = 'B';
//
//	switch (grade)
//	{
//	case 'A':
//		cout << "很棒！" << endl;
//		break;
//	case 'B':
//	case 'C':
//		cout << "做得好！" << endl;
//		break;
//	case 'D':
//		cout << "您通过了" << endl;
//		break;
//	case 'F':
//		cout << "最好再试一下" << endl;
//		break;
//	default:
//		cout << "无效的成绩" << endl;
//	}
//
//	cout << "您的成绩是 " << grade << endl;
//}

//void main()
//{
//	int a = 100;
//	int b = 200;
//
//	switch (a)
//	{
//	case 100:
//		cout << "这是外部switch的一部分" << endl;
//		switch (b)
//		{
//		case 200:
//			cout << "这是内部switch的一部分" << endl;
//		}
//	}
//	cout << "a 的准确值是 " << a << endl;
//	cout << "b 的准确值是 " << b << endl;
//
//}

void main()
{
	int x, y = 10;

	x = (y < 10) ? 30 : 40;
	cout << "value of x: " << x << endl;
}