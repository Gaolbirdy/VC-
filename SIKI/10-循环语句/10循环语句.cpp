// 10循环语句.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	/*int count = 0;
	while (count < 100)
	{
		cout << "生成一个敌人 No." << count << endl;
		count++;
	}*/

	/*int count = 0;
	do
	{
		cout << "生成一个敌人 No." << count << endl;
		count++;
	} while (count < 10);
	cout << "while循环下面的代码" << endl;*/

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		cout << "生成一个敌人 No." << i << endl;
	}
	cout << "for循环下面的代码" << endl; 

	//int count = 0;
	//while (count < 10)
	//{
	//	cout << "生成一个敌人 No." << count << endl;
	//	count++;

	//	//if (count == 5)
	//	//{
	//	//	break;	// 用来中断循环
	//	//}
	//}

	return 0;
}

