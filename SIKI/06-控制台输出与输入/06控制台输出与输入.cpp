// 06����̨���������.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool RunCalculator();

void main()
{
	cout << "������!" << endl;

	while (true)
	{
		bool isContinue = RunCalculator();
		if (!isContinue)
		{
			break;
		}
	}
}

bool RunCalculator()
{
	int operator1;

	cout << "�������һ�����֣�";
	cin >> operator1;

	int operator2;

	cout << "������ڶ������֣�";
	cin >> operator2;

	int res = operator1 + operator2;
	cout << "��Ϊ��" << res << endl << endl;

	cout << "���������� (y/n)" << endl << endl;
	char c;
	cin >> c;
	if (c == 'y')
	{
		return true;
	}
	else
	{
		return false;
	}
}

