// 09�������ж����.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	/*if (false)
	{
		cout << "if���1" << endl;
		cout << "if���2" << endl;
		cout << "if���3" << endl;
	}
	else
	{
		cout << "else���1" << endl;
		cout << "else���2" << endl;
	}*/

	/*bool isDead = true;

	if (isDead)
	{
		cout << "Game Over����" << endl;
	}*/

	//bool isVip = false;

	///*if (isVip)
	//{
	//	cout << "��ʾ���ۺ�ļ۸�" << endl;
	//}
	//if (isVip == false)
	//{
	//	cout << "if���֮��" << endl;
	//}*/

	///*if (isVip)
	//	cout << "��ʾ���ۺ�ļ۸�" << endl;
	//else
	//	cout << "��ʾ�����ļ۸�" << endl;*/

	//int vip = 3;
	//
	//if (vip == 1)
	//{
	//	cout << "�����" << endl;
	//}
	//else if (vip == 2)
	//{
	//	cout << "�����" << endl;
	//}
	//else if (vip == 3)
	//{
	//	cout << "������" << endl;
	//}
	////else
	////{
	////	cout << "������" << endl;
	////}

	//cout << "if���֮��" << endl;

	int vip = 3;
	switch (vip)
	{
		case 1:
			// ���
			cout << "�����" << endl;
			break;
		case 2:
			cout << "�����" << endl;
			break;
		case 3:
		case 4:
		case 5:
			cout << "������" << endl;
			//vip = 6;
			break;
		case 6:
			cout << "������" << endl;
			break; 
		case 0:
		default:
			cout << "������" << endl;
			break;
	}
	cout << "switch���֮��" << endl;

	// 1-100 101-1000 1001-2000
	int money = 999;
	if (money >0 && money <= 100)
	{
		cout << "vip1" << endl;
	}
	else if (money > 100 && money <= 1000)
	{
		cout << "vip2" << endl;
	}
	else if (money > 1000 && money <= 2000)
	{
		cout << "vip3" << endl;
	}

}
