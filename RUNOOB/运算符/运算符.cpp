// �����.cpp: �������̨Ӧ�ó������ڵ㡣
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
//	// a��ֵ�ڸ�ֵ֮ǰ��������
//	c = a++;
//	cout << "Line 1 - Value of a++ is :" << c << endl;
//
//	// ���ʽ����֮��a ��ֵ���� 1
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
//	cout << "Line 1 - c ��ֵ�� " << c << endl;
//	c = a - b;
//	cout << "Line 2 - c ��ֵ�� " << c << endl;
//	c = a * b;
//	cout << "Line 3 - c ��ֵ�� " << c << endl;
//	c = a / b;
//	cout << "Line 4 - c ��ֵ�� " << c << endl;
//	c = a % b;
//	cout << "Line 5 - c ��ֵ�� " << c << endl;
//
//	int d = 10;	// �����������Լ�
//	c = d++;
//	cout << "Line 6 - c ��ֵ�� " << c << endl;
//
//	d = 10;	// ���¸�ֵ
//	c = d--;
//	cout << "Line 7 - c ��ֵ�� " << c << endl;
//
//	d = 10;	// ���¸�ֵ
//	c = ++d;
//	cout << "Line 8 - c ��ֵ�� " << c << endl;
//
//	d = 10;	// ���¸�ֵ
//	c = --d;
//	cout << "Line 9 - c ��ֵ�� " << c << endl;
//}

//void main()
//{
//	int a = 21;
//	int b = 10;
//	int c;
//
//	if (a == b)
//	{
//		cout << "Line 1 -  a ���� b" << endl;
//	}
//	else
//	{
//		cout << "Line 1 -  a ������ b" << endl;
//	}
//
//	if (a < b)
//	{
//		cout << "Line 2 -  a С�� b" << endl;
//	}
//	else
//	{
//		cout << "Line 2 -  a ��С�� b" << endl;
//	}
//
//	if (a > b)
//	{
//		cout << "Line 3 -  a ���� b" << endl;
//	}
//	else
//	{
//		cout << "Line 3 -  a ������ b" << endl;
//	}
//
//	/* �ı� a �� b ��ֵ */
//	a = 5;
//	b = 20;
//	if (a <= b)
//	{
//		cout << "Line 4 -  a С�ڵ��� b" << endl;
//	}
//	if ( b >= a)
//	{
//		cout << "Line 5 -  b ���ڵ��� a" << endl;
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
//		cout << "Line 1 - ����Ϊ��" << endl;
//	}
//
//	if (a || b)
//	{
//		cout << "Line 2 - ����Ϊ��" << endl;
//	}
//
//	/* �ı� a �� b ��ֵ */
//	a = 0;
//	b = -10;
//	if (a && b)
//	{
//		cout << "Line 3 - ����Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "Line 4 - ������Ϊ��" << endl;
//	}
//
//	if (!(a&&b))
//	{
//		cout << "Line 5 - ����Ϊ��" << endl;
//	}
//}


//void main()
//{
//	unsigned int a = 60;	// 60 = 0011 1100
//	unsigned int b = 13;	// 13 = 0000 1101
//	int c = 0;
//
//	c = a & b;	// 12 = 0000 1100
//	cout << "Line 1 - c ��ֵ�� " << c << endl;
//
//	c = a | b;	// 60 = 0011 1101
//	cout << "Line 2 - c ��ֵ�� " << c << endl;
//
//	c = a ^ b;	// 49 = 0011 0001
//	cout << "Line 3 - c ��ֵ�� " << c << endl;
//
//	c = ~a;	// -61 = 1100 0011
//	cout << "Line 4 - c ��ֵ�� " << c << endl;
//
//	c = a << 2;	// 240 = 1111 0000
//	cout << "Line 5 - c ��ֵ�� " << c << endl;
//
//	c = a >> 2;	// 15 = 0000 1111
//	cout << "Line 6 - c ��ֵ�� " << c << endl;
//
//}

//void main()
//{
//	int a = 21;
//	int c;
//
//	c = a;
//	cout << "Line 1 - = �����ʵ����c ��ֵ = " << c << endl;
//
//	c += a;
//	cout << "Line 2 - += �����ʵ����c ��ֵ = " << c << endl;
//
//	c -= a;
//	cout << "Line 3 - -= �����ʵ����c ��ֵ = " << c << endl;
//
//	c *= a;
//	cout << "Line 4 - *= �����ʵ����c ��ֵ = " << c << endl;
//
//	c /= a;
//	cout << "Line 5 - /= �����ʵ����c ��ֵ = " << c << endl;
//
//	c = 200;
//	c %= a;
//	cout << "Line 6 - %= �����ʵ����c ��ֵ = " << c << endl;
//
//	c <<= 2;
//	cout << "Line 7 - <<= �����ʵ����c ��ֵ = " << c << endl;
//
//	c >>= 2;
//	cout << "Line 8 - >>= �����ʵ����c ��ֵ = " << c << endl;
//
//	c &= 2;
//	cout << "Line 9 - &= �����ʵ����c ��ֵ = " << c << endl;
//
//	c ^= 2;
//	cout << "Line 10 - ^= �����ʵ����c ��ֵ = " << c << endl;
//
//	c |= 2;
//	cout << "Line 11 - |= �����ʵ����c ��ֵ = " << c << endl;
//
//}

//void main()
//{
//	cout << "Size of char �� " << sizeof(char) << endl;
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
	// ���ʽṹ�ĳ�Աʱʹ�õ������
	/*strcpy_s(emp.first_name, "zara");
	cout << emp.first_name << endl;*/

	// p_emp ��һ��ָ�룬ָ������Ϊ Employee �Ķ���
	Employee *p_emp = &emp;
	cout << "�ṹ����emp�ĵ�ַ��" << &emp << endl;
	cout << "ָ������д�ĵ�ַ��" << p_emp << endl;

	// ��ֵ "zara" �������� emp �� first_name ��Ա
	// ͨ��ָ����ʽṹ�ĳ�Աʱ����ʹ�ü�ͷ�����
	strcpy_s(p_emp->first_name, "zara");
	cout << emp.first_name << endl;

	cout << *p_emp->first_name << endl;
	//cout << *p_emp << endl;
	cout << p_emp->first_name << endl;

}

//void main()
//{
//	cout << int(2.2000) << endl;
//	cout << (int)2.2000 << endl;
//
//
//	double a = 21.09399;
//	float b = 10.20;
//	int c;
//
//	c = (int)a;
//	cout << "Line 1 - Value of (int)a is :" << c << endl;
//
//	c = (int)b;
//	cout << "Line 2 - Value of (int)b is :" << c << endl;
//}

//void main()
//{
//	/*int a = 1;
//	cout << &a << endl;
//	cout << *(&a) << endl;
//	cout << *&a << endl;
//
//	int b = *(&a) + 2;
//	cout << &b << endl;
//	cout << *(&b) << endl;
//	cout << *&b << endl;
//
//	int c = *(&a);
//	c = 10;
//	cout << &c << endl;
//	cout << *(&c) << endl;
//	cout << *&c << endl;
//	cout << &a << endl;
//	cout << *(&a) << endl;
//	cout << *&a << endl;*/
//
//	int var;
//	int *ptr;
//	int val;
//
//	var = 3000;
//
//	// ��ȡvar�ĵ�ַ��& ��һԪ����������ز��������ڴ��ַ
//	ptr = &var;
//
//	// ��ȡprt��ֵ��* ��һԪ����������ز�������ָ����ַ�ı�����ֵ
//	val = *ptr;
//	cout << "Value of var ��" << var << endl;
//
//	cout << "Value of ptr ��" << ptr << endl;
//	cout << "Value of &var ��" << &var << endl;
//
//	cout << "Value of val ��" << val << endl;
//	cout << "Value of *ptr ��" << *ptr << endl;
//
//	int *pt2;
//	pt2 = *(&ptr);
//	cout << pt2 << endl;
//	cout << *pt2 << endl;
//	pt2 = &(*ptr);
//	cout << pt2 << endl;
//	cout << *pt2 << endl;
//}

//void main()
//{
//	int a = 20;
//	int b = 10;
//	int c = 15;
//	int d = 5;
//	int e;
//
//	e = (a + b) * c / d;	// (20 + 10) * 15 / 5
//	cout << "(a + b) * c / d ��ֵ�� " << e << endl;
//
//	e = ((a + b) * c) / d;	// ((20 + 10) * 15) / 5
//	cout << "((a + b) * c) / d ��ֵ�� " << e << endl;
//
//	e = (a + b) * (c / d);	// ((20 + 10) * (15 / 5)
//	cout << "(a + b) * (c / d) ��ֵ�� " << e << endl;
//
//	e = a + (b * c) / d;	// 20 + (10 * 15) / 5
//	cout << "a + (b * c) / d ��ֵ�� " << e << endl;
//}
