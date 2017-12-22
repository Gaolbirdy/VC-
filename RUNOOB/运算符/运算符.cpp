// 运算符.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


//int main()
//{
//	int a = 21;
//	int c;
//	
//	// a的值在赋值之前不会自增
//	c = a++;
//	cout << "Line 1 - Value of a++ is :" << c << endl;
//
//	// 表达式计算之后，a 的值增加 1
//	cout << "Line 2 - Value of a is :" << a << endl;
//
//	c = ++a;
//	cout << "Line 3 - Value of ++a is :" << c << endl;
//
//    return 0;
//}

//void main(void)
//{
//	int a = 21;
//	int b = 10;
//
//	int c = a + b;
//	cout << "Line 1 - c 的值是 " << c << endl;
//	c = a - b;
//	cout << "Line 2 - c 的值是 " << c << endl;
//	c = a * b;
//	cout << "Line 3 - c 的值是 " << c << endl;
//	c = a / b;
//	cout << "Line 4 - c 的值是 " << c << endl;
//	c = a % b;
//	cout << "Line 5 - c 的值是 " << c << endl;
//
//	int d = 10;	// 测试自增、自减
//	c = d++;
//	cout << "Line 6 - c 的值是 " << c << endl;
//
//	d = 10;	// 重新赋值
//	c = d--;
//	cout << "Line 7 - c 的值是 " << c << endl;
//
//	d = 10;	// 重新赋值
//	c = ++d;
//	cout << "Line 8 - c 的值是 " << c << endl;
//
//	d = 10;	// 重新赋值
//	c = --d;
//	cout << "Line 9 - c 的值是 " << c << endl;
//}

//void main()
//{
//	int a = 21;
//	int b = 10;
//	int c;
//
//	if (a == b)
//	{
//		cout << "Line 1 -  a 等于 b" << endl;
//	}
//	else
//	{
//		cout << "Line 1 -  a 不等于 b" << endl;
//	}
//
//	if (a < b)
//	{
//		cout << "Line 2 -  a 小于 b" << endl;
//	}
//	else
//	{
//		cout << "Line 2 -  a 不小于 b" << endl;
//	}
//
//	if (a > b)
//	{
//		cout << "Line 3 -  a 大于 b" << endl;
//	}
//	else
//	{
//		cout << "Line 3 -  a 不大于 b" << endl;
//	}
//
//	/* 改变 a 和 b 的值 */
//	a = 5;
//	b = 20;
//	if (a <= b)
//	{
//		cout << "Line 4 -  a 小于等于 b" << endl;
//	}
//	if ( b >= a)
//	{
//		cout << "Line 5 -  b 大于等于 a" << endl;
//	}
//}

//void main()
//{
//	int a = 5;
//	int b = 20;
//	int c;
//
//	if (a && b)
//	{
//		cout << "Line 1 - 条件为真" << endl;
//	}
//
//	if (a || b)
//	{
//		cout << "Line 2 - 条件为真" << endl;
//	}
//
//	/* 改变 a 和 b 的值 */
//	a = 0;
//	b = -10;
//	if (a && b)
//	{
//		cout << "Line 3 - 条件为真" << endl;
//	}
//	else
//	{
//		cout << "Line 4 - 条件不为真" << endl;
//	}
//
//	if (!(a&&b))
//	{
//		cout << "Line 5 - 条件为真" << endl;
//	}
//}


//void main()
//{
//	unsigned int a = 60;	// 60 = 0011 1100
//	unsigned int b = 13;	// 13 = 0000 1101
//	int c = 0;
//
//	c = a & b;	// 12 = 0000 1100
//	cout << "Line 1 - c 的值是 " << c << endl;
//
//	c = a | b;	// 60 = 0011 1101
//	cout << "Line 2 - c 的值是 " << c << endl;
//
//	c = a ^ b;	// 49 = 0011 0001
//	cout << "Line 3 - c 的值是 " << c << endl;
//
//	c = ~a;	// -61 = 1100 0011
//	cout << "Line 4 - c 的值是 " << c << endl;
//
//	c = a << 2;	// 240 = 1111 0000
//	cout << "Line 5 - c 的值是 " << c << endl;
//
//	c = a >> 2;	// 15 = 0000 1111
//	cout << "Line 6 - c 的值是 " << c << endl;
//
//}

//void main()
//{
//	int a = 21;
//	int c;
//
//	c = a;
//	cout << "Line 1 - = 运算符实例，c 的值 = " << c << endl;
//
//	c += a;
//	cout << "Line 2 - += 运算符实例，c 的值 = " << c << endl;
//
//	c -= a;
//	cout << "Line 3 - -= 运算符实例，c 的值 = " << c << endl;
//
//	c *= a;
//	cout << "Line 4 - *= 运算符实例，c 的值 = " << c << endl;
//
//	c /= a;
//	cout << "Line 5 - /= 运算符实例，c 的值 = " << c << endl;
//
//	c = 200;
//	c %= a;
//	cout << "Line 6 - %= 运算符实例，c 的值 = " << c << endl;
//
//	c <<= 2;
//	cout << "Line 7 - <<= 运算符实例，c 的值 = " << c << endl;
//
//	c >>= 2;
//	cout << "Line 8 - >>= 运算符实例，c 的值 = " << c << endl;
//
//	c &= 2;
//	cout << "Line 9 - &= 运算符实例，c 的值 = " << c << endl;
//
//	c ^= 2;
//	cout << "Line 10 - ^= 运算符实例，c 的值 = " << c << endl;
//
//	c |= 2;
//	cout << "Line 11 - |= 运算符实例，c 的值 = " << c << endl;
//
//}

//void main()
//{
//	cout << "Size of char ： " << sizeof(char) << endl;
//	cout << "Size of int : " << sizeof(int) << endl;
//	cout << "Size of short int : " << sizeof(short int) << endl;
//	cout << "Size of long int : " << sizeof(long int) << endl;
//	cout << "Size of float : " << sizeof(float) << endl;
//	cout << "Size of double : " << sizeof(double) << endl;
//	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
//
//}

//void main()
//{
//	int y = 20;
//	int var;
//	/*if (y < 10)
//	{
//		var = 30;
//	}
//	else
//	{
//		var = 40;
//	}*/
//	var = (y < 10) ? 30 : 40;
//	cout << var << endl;
//}

//void main()
//{
//	int var, count, incr;
//	var = (count = 19, incr = 10, count + 1 + incr);
//	cout << "var: " << var << endl;
//	cout << "count: " << count << endl;
//	cout << "incr: " << incr << endl;
//
//	int i, j;
//	j = 10;
//	i = (j++, j + 100, 999 + j);
//	cout << i << endl;
//}

struct Employee
{
	char first_name[16];
	int age;
} emp;

void main()
{
	// 访问结构的成员时使用点运算符
	/*strcpy_s(emp.first_name, "zara");
	cout << emp.first_name << endl;*/

	// p_emp 是一个指针，指向类型为 Employee 的对象
	Employee *p_emp = &emp;
	cout << "结构变量emp的地址：" << &emp << endl;
	cout << "指针变量中存的地址：" << p_emp << endl;

	// 把值 "zara" 赋给对象 emp 的 first_name 成员
	// 通过指针访问结构的成员时，则使用箭头运算符
	strcpy_s(p_emp->first_name, "zara");
	cout << emp.first_name << endl;

	cout << *p_emp->first_name << endl;

}