// 10ѭ�����.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	/*int count = 0;
	while (count < 100)
	{
		cout << "����һ������ No." << count << endl;
		count++;
	}*/

	/*int count = 0;
	do
	{
		cout << "����һ������ No." << count << endl;
		count++;
	} while (count < 10);
	cout << "whileѭ������Ĵ���" << endl;*/

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		cout << "����һ������ No." << i << endl;
	}
	cout << "forѭ������Ĵ���" << endl; 

	//int count = 0;
	//while (count < 10)
	//{
	//	cout << "����һ������ No." << count << endl;
	//	count++;

	//	//if (count == 5)
	//	//{
	//	//	break;	// �����ж�ѭ��
	//	//}
	//}

	return 0;
}

