// ����.cpp: �������̨Ӧ�ó������ڵ㡣
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
//	cout << "����ǰ, a ��ֵ��" << a << endl;
//	cout << "����ǰ, b ��ֵ��" << b << endl;
//
//	//swap(a, b);
//	/* ���ú���������ֵ
//	* &a ��ʾָ�� a ��ָ�룬������ a �ĵ�ַ
//	* &b ��ʾָ�� b ��ָ�룬������ b �ĵ�ַ
//	*/
//	swap(&a, &b);
//
//	cout << "������, a ��ֵ��" << a << endl;
//	cout << "������, b ��ֵ��" << b << endl;
//
//}
//
//void swap(int *x, int *y)
//{
//	int temp;
//
//	temp = *x;	// �����ַ x ��ֵ
//	*x = *y;	// �� y ��ֵ�� x
//	*y = temp;	// �� x ��ֵ�� y
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
//	cout << "����ǰ, a ��ֵ��" << a << endl;
//	cout << "����ǰ, b ��ֵ��" << b << endl;
//
//	//swap(a, b);
//	swap(a, b);
//
//	cout << "������, a ��ֵ��" << a << endl;
//	cout << "������, b ��ֵ��" << b << endl;
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


	// ����򵥵�lambda���ʽ
	auto basicLambda = [] {cout << "Hello, world!" << endl; };
	// ����
	basicLambda();

	// ָ����������
	auto add = [](int a, int b)->int {return a + b; };

	// �Զ��ƶϷ���ֵ����
	auto multiply = [](int a, int b) {return a*b; };

	int sum = add(2, 5);
	int product = multiply(2, 5);

	cout << sum << endl;
	cout << product << endl;
}

