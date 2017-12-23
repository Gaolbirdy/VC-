// 数组.cpp: 定义控制台应用程序的入口点。
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
//	int n[10];	// n 是一个包含10个整数的数组
//
//	// 初始化数组元素
//	for (int i = 0; i < 10; i++)
//	{
//		n[i] = i + 100;	// 设置元素 i 为 i+  100
//	}
//	cout << "Element" << setw(13) << "Value" << endl;
//
//	// 输出数组中每个元素的值
//	for (int j = 0; j < 10; j++)
//	{
//		cout << setw(7) << j << setw(13) << n[j] << endl;
//	}
//}

//void main()
//{
//	int threedim[5][10][4];	//三维 5 . 10 . 4 整型数组
//
//	// 3 行 4 列的数组
//	int a[3][4] =
//	{
//		{ 0,1,2,3 },	// 初始化索引号为 0 的行
//		{ 4,5,6,7 },	// 初始化索引号为 1 的行
//		{ 8,9,10,11 },	// 初始化索引号为 2 的行
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
//	// 一个带有5行2列的数组
//	int a[5][2] =
//	{
//		{ 0,0 },
//		{ 1,2 },
//		{ 2,4 },
//		{ 3,6 },
//		{ 4,8 },
//	};
//
//	// 输出数组中每个元素的值
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
//	// 数组名是一个指向数组中第一个元素的常量指针
//	double balance[10] = { 1,2,3,4,5,6,7,8,9,10 };	 // balance 是一个指向 &balance[0] 的指针 即数组 balance 的第一个元素的地址
//
//	p = balance;
//	q = &balance[0];
//
//	cout << "指针变量存放的地址" << endl;
//	cout << p << endl;
//	cout << q << endl;
//	cout << balance << endl << endl;
//
//	cout << "地址的运算后，取值" << endl;
//	cout << &balance[0] + 1 << endl;
//	cout << balance + 1 << endl;
//	cout << p + 1 << endl;
//	cout << q + 1 << endl;
//	cout << *(&balance[0] + 1) << endl;
//	cout << *(balance + 1) << endl;
//	cout << *(p + 1) << endl;
//	cout << *(q + 1) << endl << endl;
//
//	cout << "指针变量自身的地址" << endl;
//	cout << &p << endl;
//	cout << &q << endl;
//	// balance数组名本身就是数组第一个元素的地址?
//	cout << &balance << endl << endl;	
//
//	cout << "指针变量指向的地址存放的值" << endl;
//	cout << *p << endl;
//	cout << *q << endl;
//	cout << *balance << endl << endl;
//
//	cout << "指针变量赋值给普通变量" << endl;
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
//	// 带有5个元素的double数组
//	double balance[5] = { 1000.0,2.0,3.4,17.0,50.0 };
//	double *p;
//
//	p = balance;
//
//	// 输出数组中每个元素的值
//	cout << "使用指针的数组值 " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "*(p + " << i << ") : ";
//		cout << *(p + i) << endl;
//	}
//
//	cout << "使用 balance 作为地址的数组值 " << endl;
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
//	// 输出数组中每个元素的值
//	printf("使用指针的数组值\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("*(p + %d) : %.1f\n", i, *(p + i));
//	}
//
//	printf("使用 balance 作为地址的数组值\n");
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


//// 函数声明
//double getAverage(int *arr, int size);
////double getAverage(int arr[], int size);
//
//void main()
//{
//	// 带有 5 个元素的整型数组
//	int balance[5] = { 1000,2,3,17,50 };
//	double avg;
//
//	// 传递一个指向数组的指针作为参数
//	avg = getAverage(balance, 5);
//
//	// 输出返回值
//	cout << "平均值是: " << avg << endl;
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

// 要调用上面定义函数的主函数
void main()
{
	// 一个指向整数的指针，接受函数返回的整数数组的指针
	int *p;

	p = getRandom();
	for (int i = 0; i < 10; i++)
	{
		cout << "*(p + " << i << "): ";
		cout << *(p + i) << endl;
	}

}

// 要生成和返回随机数的函数
int * getRandom()
{
	static int r[10];

	// 设置种子
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		r[i] = rand();
		cout << r[i] << endl;
	}

	return r;
}