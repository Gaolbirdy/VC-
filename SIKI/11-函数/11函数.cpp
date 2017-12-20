// 11函数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int CreateEnemy(int enemyType, string name, int pos, int HP)
{
	if (enemyType == 1) 
	{
		cout << "生成敌人的第一个步骤， 名字：" << name << endl;
	}
	cout << "生成敌人的第二个步骤，位置：" << pos << endl;
	cout << "生成敌人的第三个步骤，血量：" << HP << endl;

	if (enemyType == 1)
	{
		return 90;
	}
	else
	{
		return 100;
	}
}

int Add(int arg1, int arg2)
{
	return arg1 + arg2;
}

int main()
{
	int enemyType = 1;
	int pos = CreateEnemy(enemyType, "神奇女侠", 5, 100);
	cout << "生成的位置是：" << pos << endl;
	cout << endl;

	enemyType = 2;
	CreateEnemy(enemyType, "神奇男侠", 6, 200);

	int a = 100, b = 90;
	int res = Add(a, b);
	cout << res << endl;

    return 0;
}
