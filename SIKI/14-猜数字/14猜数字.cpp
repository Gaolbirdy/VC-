// 14猜数字.cpp: 定义控制台应用程序的入口点。
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

	cout << "猜数字" << endl;
	srand((int)time(0));
	int number = rand() % 10 + 1;

	bool isSuccess = false;
	const int times = 5;

	for (int i = 0; i < times; i++)
	{
		cout << "我心中想了一个1-10之间的数字，你猜是几呢？ ";
		int numberGuess;
		cin >> numberGuess;

		if (numberGuess > number)
		{
			cout << "猜大了" << endl;
		}
		else if(numberGuess == number)
		{
			isSuccess = true;
			cout << "猜中了！！！" << endl;
			break;
		}
		else
		{
			cout << "猜小了" << endl;
		}
	}

	if (!isSuccess)
	{
		cout << "Game Over" << endl;
	}
}
