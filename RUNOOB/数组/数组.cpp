// ����.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include <iomanip>
using std::setw;

//int main()
//{
//	//double balance[5] = { 1000.0,2.0,3.4,7.0,50.0 };
//	double balance[5] = { 1000.0,2.0,3.4,7.0,50.0 };
//	balance[4] = 40.0;
//	
//	cout << balance[4] << endl;
//
//
//    return 0;
//}

//void main()
//{
//	int n[10];	// n ��һ������10������������
//
//	// ��ʼ������Ԫ��
//	for (int i = 0; i < 10; i++)
//	{
//		n[i] = i + 100;	// ����Ԫ�� i Ϊ i+  100
//	}
//	cout << "Element" << setw(13) << "Value" << endl;
//
//	// ���������ÿ��Ԫ�ص�ֵ
//	for (int j = 0; j < 10; j++)
//	{
//		cout << setw(7) << j << setw(13) << n[j] << endl;
//	}
//}

//void main()
//{
//	int threedim[5][10][4];	//��ά 5 . 10 . 4 ��������
//
//	// 3 �� 4 �е�����
//	int a[3][4] =
//	{
//		{ 0,1,2,3 },	// ��ʼ��������Ϊ 0 ����
//		{ 4,5,6,7 },	// ��ʼ��������Ϊ 1 ����
//		{ 8,9,10,11 },	// ��ʼ��������Ϊ 2 ����
//	};
//
//	int b[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
//
//	int val = a[2][3];
//
//	cout << val << endl;
//}


//void main()
//{
//	// һ������5��2�е�����
//	int a[5][2] =
//	{
//		{ 0,0 },
//		{ 1,2 },
//		{ 2,4 },
//		{ 3,6 },
//		{ 4,8 },
//	};
//
//	// ���������ÿ��Ԫ�ص�ֵ
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			cout << "a[" << i << "][" << j << "]: ";
//			cout << a[i][j] << endl;
//		}
//	}
//}

//void main()
//{
//	//double balance[50];
//
//	double *p;
//	double *q;
//	// ��������һ��ָ�������е�һ��Ԫ�صĳ���ָ��
//	double balance[10] = { 1,2,3,4,5,6,7,8,9,10 };	 // balance ��һ��ָ�� &balance[0] ��ָ�� ������ balance �ĵ�һ��Ԫ�صĵ�ַ
//
//	p = balance;
//	q = &balance[0];
//
//	cout << "ָ�������ŵĵ�ַ" << endl;
//	cout << p << endl;
//	cout << q << endl;
//	cout << balance << endl << endl;
//
//	cout << "��ַ�������ȡֵ" << endl;
//	cout << &balance[0] + 1 << endl;
//	cout << balance + 1 << endl;
//	cout << p + 1 << endl;
//	cout << q + 1 << endl;
//	cout << *(&balance[0] + 1) << endl;
//	cout << *(balance + 1) << endl;
//	cout << *(p + 1) << endl;
//	cout << *(q + 1) << endl << endl;
//
//	cout << "ָ���������ĵ�ַ" << endl;
//	cout << &p << endl;
//	cout << &q << endl;
//	// balance������������������һ��Ԫ�صĵ�ַ?
//	cout << &balance << endl << endl;	
//
//	cout << "ָ�����ָ��ĵ�ַ��ŵ�ֵ" << endl;
//	cout << *p << endl;
//	cout << *q << endl;
//	cout << *balance << endl << endl;
//
//	cout << "ָ�������ֵ����ͨ����" << endl;
//	double val1, val2, val3, val4;
//	val1 = *balance;
//	val2 = *(&balance[0]);
//	val3 = *p;
//	val4 = *q;
//	cout << val1 << endl;
//	cout << val2 << endl;
//	cout << val3 << endl;
//	cout << val4 << endl;
//}

//int main()
//{
//	// ����5��Ԫ�ص�double����
//	double balance[5] = { 1000.0,2.0,3.4,17.0,50.0 };
//	double *p;
//
//	p = balance;
//
//	// ���������ÿ��Ԫ�ص�ֵ
//	cout << "ʹ��ָ�������ֵ " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "*(p + " << i << ") : ";
//		cout << *(p + i) << endl;
//	}
//
//	cout << "ʹ�� balance ��Ϊ��ַ������ֵ " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "*(balance + " << i << ") : ";
//		cout << *(balance + i) << endl;
//	}
//
//}

//#include <stdio.h>
//
//int main()
//{
//	double balance[5] = { 1000.0, 2.0, 3.4, 17.0, 50.0 };
//	double *p;
//	int i;
//
//	p = balance;
//
//	// ���������ÿ��Ԫ�ص�ֵ
//	printf("ʹ��ָ�������ֵ\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("*(p + %d) : %.1f\n", i, *(p + i));
//	}
//
//	printf("ʹ�� balance ��Ϊ��ַ������ֵ\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("*(balance + %d) : %f\n", i, *(balance + i));
//	}
//}

//void myFunction1(int *param) 
//{
//
//}
//
//void myFunction2(int param[10])
//{
//
//}
//
//void myFunction3(int param[])
//{
//
//}


//// ��������
//double getAverage(int *arr, int size);
////double getAverage(int arr[], int size);
//
//void main()
//{
//	// ���� 5 ��Ԫ�ص���������
//	int balance[5] = { 1000,2,3,17,50 };
//	double avg;
//
//	// ����һ��ָ�������ָ����Ϊ����
//	avg = getAverage(balance, 5);
//
//	// �������ֵ
//	cout << "ƽ��ֵ��: " << avg << endl;
//}
//
//double getAverage(int *arr, int size)
//{
//	int i, sum = 0;
//	double avg;
//
//	for (i = 0; i < size; i++)
//	{
//		sum += arr[i];
//	}
//
//	avg = double(sum) / size;
//
//	return avg;
//}

//int * myFunction()
//{
//
//}


int * getRandom();

// Ҫ�������涨�庯����������
void main()
{
	// һ��ָ��������ָ�룬���ܺ������ص����������ָ��
	int *p;

	p = getRandom();
	for (int i = 0; i < 10; i++)
	{
		cout << "*(p + " << i << "): ";
		cout << *(p + i) << endl;
	}

}

// Ҫ���ɺͷ���������ĺ���
int * getRandom()
{
	static int r[10];

	// ��������
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		r[i] = rand();
		cout << r[i] << endl;
	}

	return r;
}