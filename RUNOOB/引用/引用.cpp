// ����.cpp: �������̨Ӧ�ó������ڵ㡣
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
//	// �����򵥵ı���
//	int i;
//	double d;
//
//	// �������ñ���
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
//	cout << "����ǰ��a��ֵ�� " << a << endl;
//	cout << "����ǰ��b��ֵ�� " << b << endl;
//
//	swap(a, b);
//	cout << "������a��ֵ�� " << a << endl;
//	cout << "������b��ֵ�� " << b << endl;
//}
//
//void swap(int &x, int &y)
//{
//	int temp;
//	temp = x;	// �����ַ x ��ֵ
//	x = y;	// �� y ��ֵ�� x
//	y = temp;	// �� x ��ֵ�� y
//
//	cout << &x << endl;
//	cout << &y << endl;
//}

double vals[] = { 10.1,12.6,33.1,24.1,50.0 };

// ����������һ������ʱ���򷵻�һ��ָ�򷵻�ֵ����ʽָ�롣�����������Ϳ��Է��ڸ�ֵ�������
double & setValues(int i)
{
	return vals[i];	// ���ص� i ��Ԫ�ص�����
}

void main()
{
	cout << "�ı�ǰ��ֵ" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}

	cout << &vals[3] << endl;
	cout << &setValues(3) << endl;

	setValues(1) = 20.23; // �ı��2��Ԫ��
	setValues(3) = 70.8; // �ı��4��Ԫ��

	cout << "�ı���ֵ" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}
}

int & func()
{
	int q;
	return q;	// �ڱ���ʱ��������?

	static int x;
	return x;	// ��ȫ��x �ں�������������Ȼ����Ч��
}