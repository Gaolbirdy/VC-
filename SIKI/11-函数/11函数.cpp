// 11����.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int CreateEnemy(int enemyType, string name, int pos, int HP)
{
	if (enemyType == 1) 
	{
		cout << "���ɵ��˵ĵ�һ�����裬 ���֣�" << name << endl;
	}
	cout << "���ɵ��˵ĵڶ������裬λ�ã�" << pos << endl;
	cout << "���ɵ��˵ĵ��������裬Ѫ����" << HP << endl;

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
	int pos = CreateEnemy(enemyType, "����Ů��", 5, 100);
	cout << "���ɵ�λ���ǣ�" << pos << endl;
	cout << endl;

	enemyType = 2;
	CreateEnemy(enemyType, "��������", 6, 200);

	int a = 100, b = 90;
	int res = Add(a, b);
	cout << res << endl;

    return 0;
}
