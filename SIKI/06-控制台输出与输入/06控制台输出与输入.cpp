// 06����̨���������.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "������!" << endl;

	int operator1;

	cout << "�������һ�����֣�";
	cin >> operator1;

	int operator2;

	cout << "������ڶ������֣�";
	cin >> operator2;

	int res = operator1 + operator2;
	cout << "�������ֵĺ�Ϊ��" << res << endl;
	
	return 0;
}

