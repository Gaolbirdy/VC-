// 循环.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//int main()
//{
//    // 局部变量声明
//	int a = 10;
//
//	// while循环执行
//	while (a < 20)
//	{
//		cout << "a的值: " << a << endl;
//		a++;
//	}
//	
//	return 0;
//}

//void main()
//{
//	//// for循环执行
//	//for (int  i = 10; i < 20; i = i + 1)
//	//{
//	//	cout << "i的值: " << i << endl;
//	//}
//
//	int my_array[5] = { 1,2,3,4,5 };
//
//	//// 每个数组元素乘以2
//	//for (int &x : my_array)
//	//{
//	//	x *= 2;
//	//	cout << x << endl;
//	//}
//
//	//// auto 类型也是 C++11 新标准中的，用来自动获取变量的类型
//	//for (auto &x : my_array)
//	//{
//	//	x *= 2;
//	//	cout << x << endl;
//	//}
//	//cout << my_array[4] << endl;
//
//	//// 每个数组元素乘以2
//	//for (int x : my_array)
//	//{
//	//	x *= 2;
//	//	cout << x << endl;
//	//}
//	//cout << my_array[0] << endl;
//
//	//// auto 类型也是 C++11 新标准中的，用来自动获取变量的类型
//	//for (auto &x : my_array)
//	//{
//	//	x *= 2;
//	//	cout << x << endl;
//	//}
//	//cout << my_array[0] << endl;
//
//	string str("some string");
//
//	// range for 语句
//	for (auto c : str)
//	{
//		c = toupper(c);
//	}
//	cout << str << endl;
//
//	for (auto &c : str)
//	{
//		c = toupper(c);
//	}
//	cout << str << endl;
//}
//
//void main()
//{
//	// 局部变量声明
//	int a = 10;
//
//	// do循环执行
//	do
//	{
//		cout << "a的值: " << a << endl;
//		a++;
//	} while (a < 20);
//}

//void main()
//{
//	int i, j;
//	for (i = 2; i < 100; i++)
//	{
//		for (j = 2; j <= (i / j); j++)
//		{
//			//if ((i % j) == 0)
//			if (!(i%j))
//			{
//				break;
//			}
//		}
//		if (j >(i / j))
//		{
//			cout << i << " 是质数\n";
//		}
//	}
//}

//void main()
//{
//	for (; ; )
//	{
//		printf("This loop will run forever.\n");
//	}
//}

//void main()
//{
//	int a = 10;
//
//	do
//	{
//		cout << "a的值: " << a << endl;
//		a = a + 1;
//		if (a > 15)
//		{
//			break;
//		}
//	} while (a < 20);
//}

//void main()
//{
//	int a = 10;
//
//	do
//	{
//		if (a == 15)
//		{
//			//cout << "in" << endl;
//			// 跳过迭代
//			a = a + 1;
//			continue;
//		}
//		cout << "a的值: " << a << endl;
//		a = a + 1;
//	} while (a < 20);
//}

void main()
{
	int a = 10;

	// do 循环执行
	LOOP:do
	{
		if (a == 15)
		{
			cout << "in" << endl;
			a += 1;
			goto LOOP;
		}
		cout << "a的值: " << a << endl;
		a += 1;
	} while (a < 20);
	
	//STOP:;
}