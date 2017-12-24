// 指针.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

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

//void main()
//{
//	//int *p;
//	//int *q = p;
//
//	int var;
//	int *ptr;
//	int **pptr;
//
//	var = 3000;
//
//	// 获取var的地址
//	ptr = &var;
//
//	// 使用运算符&获取ptr的地址
//	pptr = &ptr;
//
//	// 使用pptr获取值
//	cout << "Value of var: " << var << endl;
//	cout << "Value available at *ptr: " << *ptr << endl;
//	cout << "Value available at **pptr: " << **pptr << endl << endl;
//
//	// 地址
//	cout << "var的地址: " << &var << endl;
//	cout << "ptr指向的地址: " << ptr << endl;
//	cout << "ptr自身的地址: " << &ptr << endl;
//	cout << "pptr指向的地址: " << pptr << endl;
//	cout << "pptr指向的地址 (ptr) 的值里，存储的地址 (var) : " << *pptr << endl;
//	cout << "pptr自身的地址: " << &pptr << endl;
//}

//void main()
//{
//
//	int var;
//	int *ptr;
//	int *pptr;
//
//	var = 3000;
//
//	// 获取var的地址
//	ptr = &var;
//
//	// 把ptr指向的地址赋值给pptr，两者都指向了var的地址
//	pptr = ptr;
//
//	// 使用pptr获取值
//	cout << "Value of var: " << var << endl;
//	cout << "Value available at *ptr: " << *ptr << endl;
//	cout << "Value available at *pptr: " << *pptr << endl << endl;
//
//	// 
//	cout << "var的地址: " << &var << endl;
//	cout << "ptr指向的地址: " << ptr << endl;
//	cout << "ptr自身的地址: " << &ptr << endl;
//	cout << "pptr指向的地址: " << pptr << endl;
//	cout << "pptr指向的地址 (var) 的值: " << *pptr << endl;
//	cout << "pptr自身的地址: " << &pptr << endl;
//}


//void getSeconds(unsigned long *par);
////void getSeconds(unsigned long *);
//
//void main()
//{
//	unsigned long sec;
//	unsigned long *q = &sec;
//	unsigned long *p = q;
//
//	cout << "sec的地址: " << &sec << endl;
//	cout << "q指向的地址: " << q << endl;
//	cout << "p指向的地址: " << p << endl;
//
//	getSeconds(p);
//
//	// 输出实际值
//	cout << "Number of seconds : " << sec << endl;
//	cout << "Number of seconds : " << *q << endl;
//	cout << "Number of seconds : " << *p << endl;
//}
//
//void getSeconds(unsigned long *par)
//{
//	// 获取当前的秒数
//	*par = time(NULL);
//
//	cout << "par指向的地址: " << par << endl;
//
//	return;
//}

//// 能接受指针作为参数的函数，也能接受数组作为参数
//// 函数声明
//double getAverage(int *, int);
//void showPointValue(int *);
//const int MAX = 5;
//
//void main()
//{
//	// 带有5个元素整型数组
//	int balance[MAX] = { 1000,2,3,17,50 };
//	double avg;
//
//	// 传递一个指向数组的指针作为参数
//	avg = getAverage(balance, MAX);
//
//	// 输出返回值
//	cout << "Average value is : " << avg << endl << endl;
//
//	showPointValue(balance);
//
//	int a = 99;
//	int *p = &a;
//	showPointValue(p);
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
//		//cout << &arr[i] << endl;
//		//sum += *(arr + i);
//	}
//
//	//avg = (double)sum / size;
//	avg = double(sum) / size;
//	//avg = double(sum / size);
//	return avg;
//}
//
//void showPointValue(int *arr)
//{
//	cout << arr[0] << endl;
//	cout << arr[1] << endl;
//	cout << arr[MAX - 1] << endl;
//	cout << arr[MAX] << endl;
//
//	cout << *arr << endl;
//	cout << *(arr + 1) << endl;
//	cout << *(arr + MAX - 1) << endl;
//	cout << *(arr + MAX) << endl;
//
//	cout << endl;
//}

//int * myFunction()
//{
//
//}

// 要生成和返回随机数的函数
int * getRandom()
{
	static int r[10];

	// 设置种子
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		r[i] = rand();
		cout << r[i] << "  地址: " << &r[i] << endl;
	}

	return r;
}

//void testStatic()
//{
//	static int a = 2;
//	a++;
//	cout << a << endl;
//}

// 要调用上面定义函数的主函数
void main()
{
	// 一个指向整数的指针
	int *p;

	p = getRandom();
	for (int i = 0; i < 10; i++)
	{
		cout << "*(p + " << i << ") : ";
		cout << *(p + i) << "  地址: " << (p + i) << endl;
	}

	//testStatic();
	//testStatic();
	//testStatic();
}