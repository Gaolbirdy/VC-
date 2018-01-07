// 第二章01数组.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//int enemyHPArray[10] = { 100,90,80,7,6,5,4,3,2,1 };
	//int enemyHPArray[] = { 100,90,80,7,6,5,4,3,2,1 };
	int enemyHPArray[10] = { 100,90,80,7,6,5,4,3,2,1 };
	//enemyHPArray[0] = 100;
	//enemyHPArray[1] = 90;
	//enemyHPArray[2] = 90;
	//enemyHPArray[3] = 90;
	//enemyHPArray[4] = 90;
	//enemyHPArray[5] = 90;
	//enemyHPArray[6] = 90;
	//enemyHPArray[7] = 90;
	//enemyHPArray[8] = 90;
	//enemyHPArray[9] = 90;

	int totalHP = 0;
	for (int i = 0; i < 10; i++)
	{
		totalHP += enemyHPArray[i];
		//cout << enemyHPArray[i] << endl;
	}
	
	cout << totalHP << endl;

	char cArray[] = { 'a','b','3',' ','j' };
	string strArray[10] = { "siki","sikiedu","sikiedu.com","www.sikiedu.com" };

	cout << "char:" << cArray[9] << cArray[0] << endl;
	cout << "string:" << strArray[9] << strArray[0] << endl;

	if (strArray[9] == "")
	{
		cout << "yes" << endl;
	}

	int a = 'a';
	cout << "a: " << a << endl;

	string str;
	cin >> str;
	
	return 0;
}

