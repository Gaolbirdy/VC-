// Ԥ������.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//#define PI 3.14159
//
//int main()
//{
//	cout << "Value of PI : " << PI << endl;
//	return 0;
//}

//#define MIN(a, b) (a < b ? a : b)
//
//void main()
//{
//	int i, j;
//	i = 100;
//	j = 30;
//	cout << "��С��ֵΪ�� " << MIN(i, j) << endl;
//}

//#ifndef NULL
//	#define NULL 0
//#endif // !NULL
//
//#ifdef DEBUG
//	cerr << "Variable x = " << x << endl;
//#endif
//
//#if 0
//	�����б���Ĵ���
//#endif

//#define DEBUG
//
//#define MIN(a, b) ((a < b) ? a : b)
//
//void main()
//{
//	int i, j;
//	i = 100;
//	j = 30;
//
//#ifdef DEBUG
//	cerr << "Trace: Inside main function" << endl;
//#endif
//
//#if 0
//	/* ����ע�Ͳ��� */
//	cout << MKSTR(HELLO C++) << endl;
//#endif // 0
//
//	cout << "The minimum is " << MIN(i, j) << endl;
//
//#ifdef DEBUG
//	cerr << "Trace: Coming out of main function" << endl;
//#endif
//
//}

//#define MKSTR(x) #x
//
//void main()
//{
//	cout << MKSTR(HELLO C++) << endl;
//	//cout << "HELLO C++" << endl;
//}

//#define concat(a, b) a ## b
//void main()
//{
//	int xy = 100;
//	cout << concat(x, y);
//}


void main()
{
	cout << "Value of __LINE__ : " << __LINE__ << endl;
	cout << "Value of __FILE__ : " << __FILE__ << endl;
	cout << "Value of __DATE__ : " << __DATE__ << endl;
	cout << "Value of __TIME__ : " << __TIME__ << endl;
}