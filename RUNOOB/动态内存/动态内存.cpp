// 动态内存.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//int main()
//{
//	double* pvalue = NULL;	// 初始化为 null 的指针 
//	//pvalue = new double;	// 为变量请求内存
//	if (!(pvalue = new double))
//	{
//		cout << "Error: out of memory." << endl;
//		exit(1);
//	}
//	
//	delete pvalue;	// 释放 pvalue 所指向的内存
//
//	return 0;
//}

//void main()
//{
//	double* pvalue = NULL;	// 初始化为 null 的指针
//	pvalue = new double;	// 为变量请求内存
//
//	*pvalue = 29494.99;	// 在分配的地址存储值
//	cout << "Value of pvalue : " << *pvalue << endl;
//
//	delete pvalue;	// 释放内存
//}

//void main()
//{
//	//char* pvalue = NULL;	// 初始化为 null 的指针
//	//pvalue = new char[20];	// 为变量请求内存
//
//	//delete [] pvalue;	// 删除 pvalue 所指向的数组
//
//	//int m = 20;
//	//// 动态分配,数组长度为 m
//	//int* array = new int[m];
//
//	//// 释放内存
//	//delete[] array;
//
//	int** array;
//	// 假定数组第一维长度为 m， 第二维长度为 n
//	int m = 20, n = 10;
//	// 动态分配空间
//	array = new int*[m];
//	
//	for (int i = 0; i < m; i++)
//	{
//		array[i] = new int[n];
//	}
//	
//	//  释放
//	for (int i = 0; i < m; i++)
//	{
//		delete [] array[i];
//	}
//	delete[] array;
//}

//void main()
//{
//	int** p;
//	int i, j;	// p[4][8]
//	// 开始分配4行8列的二维数据
//	p = new int*[4];
//	for (i= 0; i < 4; i++)
//	{
//		p[i] = new int[8];
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			p[i][j] = j * i;
//		}
//	}
//
//	// 打印数据
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if (j == 0)
//				cout << endl;
//			cout << p[i][j] << "\t";
//		}
//	}
//
//	// 开始释放申请的堆
//	for (i = 0; i < 4; i++)
//	{
//		delete [] p[i];
//	}
//	delete[] p;
//}


//void main()
//{
//	int*** array;
//	// 假定数组第一维为 m， 第二维为 n， 第三维为h
//	int m = 3, n = 4, h = 5;
//	// 动态分配空间
//	array = new int**[m];
//	for (int i = 0; i < m; i++)
//	{
//		array[i] = new int*[n];
//		for (int j = 0; j < n; j++)
//		{
//			array[i][j] = new int[h];
//		}
//	}
//
//	// 释放
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			delete [] array[i][j];
//		}
//		delete [] array[i];
//	}
//	delete [] array;
//}

//void main()
//{
//	int i, j, k;	// p[2][3][4]
//
//	int*** p;
//	p = new int**[2];
//	for (i = 0; i < 2; i++)
//	{
//		p[i] = new int*[3];
//		for (j = 0; j < 3; j++)
//		{
//			p[i][j] = new int[4];
//		}
//	}
//
//	// 输出 p[i][j][k] 三维数据
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			for (k = 0; k < 4; k++)
//			{
//				p[i][j][k] = i + j + k;
//				cout << p[i][j][k];
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//
//	// 释放内存
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			delete[] p[i][j];
//		}
//	}
//	for (i = 0; i < 2; i++)
//	{
//		delete[] p[i];
//	}
//	delete[] p;
//}


class Box
{
	public:
		Box()
		{
			cout << "调用构造函数！" << endl;
		}
		~Box()
		{
			cout << "调用析构函数！" << endl;
		}
};

void main()
{
	Box* myBoxArray = new Box[4];

	delete[] myBoxArray;	// 删除数组
}