// 14������.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

void main()
{
	/*srand((int)time(0));
	while (true)
	{
		int number = rand() % 10 + 1;
		cout << number << endl;
	}*/

	cout << "������" << endl;
	srand((int)time(0));
	int number = rand() % 10 + 1;

	bool isSuccess = false;
	const int times = 5;

	for (int i = 0; i < times; i++)
	{
		cout << "����������һ��1-10֮������֣�����Ǽ��أ� ";
		int numberGuess;
		cin >> numberGuess;

		if (numberGuess > number)
		{
			cout << "�´���" << endl;
		}
		else if(numberGuess == number)
		{
			isSuccess = true;
			cout << "�����ˣ�����" << endl;
			break;
		}
		else
		{
			cout << "��С��" << endl;
		}
	}

	if (!isSuccess)
	{
		cout << "Game Over" << endl;
	}
}
