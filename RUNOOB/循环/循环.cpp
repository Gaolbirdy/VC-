// ѭ��.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//int main()
//{
//    // �ֲ���������
//	int a = 10;
//
//	// whileѭ��ִ��
//	while (a < 20)
//	{
//		cout << "a��ֵ: " << a << endl;
//		a++;
//	}
//	
//	return 0;
//}

//void main()
//{
//	//// forѭ��ִ��
//	//for (int  i = 10; i < 20; i = i + 1)
//	//{
//	//	cout << "i��ֵ: " << i << endl;
//	//}
//
//	int my_array[5] = { 1,2,3,4,5 };
//
//	//// ÿ������Ԫ�س���2
//	//for (int &x : my_array)
//	//{
//	//	x *= 2;
//	//	cout << x << endl;
//	//}
//
//	//// auto ����Ҳ�� C++11 �±�׼�еģ������Զ���ȡ����������
//	//for (auto &x : my_array)
//	//{
//	//	x *= 2;
//	//	cout << x << endl;
//	//}
//	//cout << my_array[4] << endl;
//
//	//// ÿ������Ԫ�س���2
//	//for (int x : my_array)
//	//{
//	//	x *= 2;
//	//	cout << x << endl;
//	//}
//	//cout << my_array[0] << endl;
//
//	//// auto ����Ҳ�� C++11 �±�׼�еģ������Զ���ȡ����������
//	//for (auto &x : my_array)
//	//{
//	//	x *= 2;
//	//	cout << x << endl;
//	//}
//	//cout << my_array[0] << endl;
//
//	string str("some string");
//
//	// range for ���
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
//	// �ֲ���������
//	int a = 10;
//
//	// doѭ��ִ��
//	do
//	{
//		cout << "a��ֵ: " << a << endl;
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
//			cout << i << " ������\n";
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
//		cout << "a��ֵ: " << a << endl;
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
//			// ��������
//			a = a + 1;
//			continue;
//		}
//		cout << "a��ֵ: " << a << endl;
//		a = a + 1;
//	} while (a < 20);
//}

void main()
{
	int a = 10;

	// do ѭ��ִ��
	LOOP:do
	{
		if (a == 15)
		{
			cout << "in" << endl;
			a += 1;
			goto LOOP;
		}
		cout << "a��ֵ: " << a << endl;
		a += 1;
	} while (a < 20);
	
	//STOP:;
}