// 指针.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//int main()
//{
//	int var1;
//	char var2[10];
//	int var3[5];
//
//	cout << "var1变量的地址: ";
//	cout << &var1 << endl;
//	cout << var1 << endl;
//
//	cout << "var2变量的地址: ";
//	cout << &var2 << endl;
//	//cout << var2 << endl;	// ?
//	
//	cout << "var3变量的地址: ";
//	cout << &var3 << endl;
//	cout << var3 << endl;
//
//	int *ip;	// 一个整型的指针
//	double *dp;	// 一个double型的指针
//	float *fp;	// 一个浮点型的指针
//	char *cp;	// 一个字符型的指针
//
//	return 0;
//}

//int main()
//{
//	int var = 20;	// 实际变量的声明
//	int *ip;	// 指针变量的声明
//
//	ip = &var;	// 在指针变量中存储var的地址
//
//	cout << "Value of var variable: ";
//	cout << var << endl;
//	//cout << *(&var) << endl;
//	//cout << *&(*(&var)) << endl;
//
//	// 输出var变量的地址
//	cout << "Address of var variable: ";
//	cout << &var << endl;
//	//cout << &(*(&var)) << endl;
//
//	// 输出在指针变量中存储的地址
//	cout << "Address stored in ip variable: ";
//	cout << ip << endl;
//
//	// 输出指针自身的地址
//	cout << "Address of ip variable: ";
//	cout << &ip << endl;
//
//	// 访问指针中地址的值
//	cout << "Value of *ip variable: ";
//	cout << *ip << endl;
//
//	/*cout << &(*ip) << endl;
//	cout << *(&ip) << endl;*/
//
//}

//void main()
//{
//	int num = 110;
//	int *p = &num;
//	cout << p << endl;
//	cout << *p << endl;
//	system("pause");
//}

//void main()
//{
//	int *ptr = NULL;
//	/*int *ptr;
//	ptr = NULL;*/
//	cout << "Ptr的值是 " << ptr << endl;
//	//cout << "*Ptr的值是 " << *ptr << endl;	// 空指针没有值，会出错
//	cout << "Ptr自身的地址是 " << &ptr << endl;
//
//	if (!ptr)
//	{
//		cout << "空指针" << endl;
//	}
//	else
//	{
//		cout << "非空指针" << endl;
//	}
//}

//const int MAX = 3;
//void main()
//{
//	int var[MAX] = { 10,100,200 };
//	int *ptr;
//
//	// 指针中的数组地址
//	ptr = var;
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Address of var[" << i << "] = ";
//		cout << ptr << endl;
//
//		cout << "Value of var[" << i << "] = ";
//		cout << *ptr << endl;
//
//		// 移动到下一个位置，内存地址递增一个int的长度，即增加4个字节
//		ptr++;
//	}
//}

//const int MAX = 3;
//int main()
//{
//	int var[MAX] = { 10,100,200 };
//	int *ptr;
//	
//	// 指针中最后一个元素的地址
//	ptr = &var[MAX - 1];
//
//	for (int i = MAX; i > 0; i--)
//	{
//		cout << "Address of var[" << i << "] = ";
//		cout << ptr << endl;
//
//		cout << "Value of var[" << i << "] = ";
//		cout << *ptr << endl;
//
//		// 移动到上一个位置，内存地址递减一个int的长度，即减少4个字节
//		ptr--;
//	}
//
//	//ptr = var + (MAX - 1);
//	/*cout << &var[0] << endl;
//	cout << var << endl;
//	cout << &var[MAX - 1] << endl;
//	cout << var + (MAX - 1) << endl;*/
//
//	/*char var2[MAX] = "ab";
//	cout << &var2[0] << endl;
//	cout << var2 << endl;
//	cout << &var2[MAX - 1] << endl;
//	cout << var2 + (MAX - 1) << endl;*/
//
//	/*short a = 1;
//	short *p = &a;
//	cout << p << endl;
//	cout << p + 1 << endl;*/
//
//	/*char a = 'a';
//	char *p = &a;
//	cout << p << endl;
//	cout << p + 1 << endl;*/
//
//}

//const int MAX = 3;
//void main()
//{
//	int var[MAX] = { 10,100,200 };
//	int *ptr;
//
//	ptr = var;
//	int i = 0;
//
//	while (ptr <= &var[MAX - 1])
//	{
//		cout << "Address of var[" << i << "] = ";
//		cout << ptr << endl;
//		
//		cout << "Value of var[" << i << "] = ";
//		cout << *ptr << endl;
//
//		// 指向下一个位置
//		ptr++;
//		i++;
//	}
//}

//const int MAX = 3;
//void main()
//{
//	int var[MAX] = { 10,100,200 };
//	int *ptr;
//
//	// 指针中的数组地址
//	ptr = var;
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "var[" << i << "]的内存地址为 ";
//		cout << ptr << endl;
//
//		cout << "var[" << i << "]的值为 ";
//		cout << *ptr << endl;
//
//		// 移动到下一个位置
//		ptr++;
//	}
//}

//const int MAX = 3;
//void main()
//{
//	int var[MAX] = { 10,100,200 };
//	//*(var + 2) = 500;
//	//cout << *(&var[2]) << endl;
//	
//	int *p = var;
//	for (int i = 0; i < MAX; i++)
//	{
//		*p = i;	// 这是正确的语法
//		//var++;	// 这是不正确的
//		cout << var[i] << endl;
//		p++;
//	}
//}

//const int MAX = 3;
//int main()
//{
//	int var[MAX] = { 10,100,200 };
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Value of var[" << i << "] = ";
//		cout << var[i] << endl;
//	}
//
//	int *ptr[MAX];
//}

//const int MAX = 3;
//void main()
//{
//	int var[MAX] = { 10,100,200 };
//	int *ptr[MAX];	// 指向整数的指针数组
//
//	for (int i = 0; i < MAX; i++)
//	{
//		ptr[i] = &var[i];	// 赋值为整数的地址
//	}
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Address of var[" << i << "] = ";
//		cout << var + i << endl;
//	}
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Value of ptr[" << i << "] = ";
//		cout << ptr[i] << endl;
//	}
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Value of *ptr[" << i << "] = ";
//		cout << *ptr[i] << endl;
//	}
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Value of var[" << i << "] = ";
//		//cout << *(&var[i]) << endl;
//		cout << *(var + i) << endl;
//	}
//
//}

//const int MAX = 4;
//void main()
//{
//	char c[] = "hello";
//	char *p = c;
//	cout << p << endl;
//	cout << *p << endl << endl;
//
//	// 指向字符的指针数组
//	const char *names[MAX] =
//	{
//		"Zara Ali",
//		"Hina Ali",
//		"Nuha Ali",
//		"Sara Ali"
//	};
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Value of names[" << i << "] = ";
//		cout << names[i] << endl;
//		cout << *names[i] << endl;
//	}
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Address of names[" << i << "] = ";
//		cout << &names[i] << endl;
//	}
//
//}

void main()
{


}
