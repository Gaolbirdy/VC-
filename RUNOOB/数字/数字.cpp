// ����.cpp: �������̨Ӧ�ó������ڵ㡣
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

	// ��������
	srand((unsigned)time(NULL));

	// ����10�������
	for (i = 0; i < 10; i++)
	{
		// ����ʵ�ʵ������
		j = rand();
		cout << "������� " << j << endl;
	}
}
