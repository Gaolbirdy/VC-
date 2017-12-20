// 09条件与判断语句.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	/*if (false)
	{
		cout << "if语句1" << endl;
		cout << "if语句2" << endl;
		cout << "if语句3" << endl;
	}
	else
	{
		cout << "else语句1" << endl;
		cout << "else语句2" << endl;
	}*/

	/*bool isDead = true;

	if (isDead)
	{
		cout << "Game Over处理" << endl;
	}*/

	//bool isVip = false;

	///*if (isVip)
	//{
	//	cout << "显示打折后的价格" << endl;
	//}
	//if (isVip == false)
	//{
	//	cout << "if语句之后" << endl;
	//}*/

	///*if (isVip)
	//	cout << "显示打折后的价格" << endl;
	//else
	//	cout << "显示正常的价格" << endl;*/

	//int vip = 3;
	//
	//if (vip == 1)
	//{
	//	cout << "打九折" << endl;
	//}
	//else if (vip == 2)
	//{
	//	cout << "打八折" << endl;
	//}
	//else if (vip == 3)
	//{
	//	cout << "打七折" << endl;
	//}
	////else
	////{
	////	cout << "不打折" << endl;
	////}

	//cout << "if语句之后" << endl;

	int vip = 3;
	switch (vip)
	{
		case 1:
			// 语句
			cout << "打九折" << endl;
			break;
		case 2:
			cout << "打八折" << endl;
			break;
		case 3:
		case 4:
		case 5:
			cout << "打七折" << endl;
			//vip = 6;
			break;
		case 6:
			cout << "打六折" << endl;
			break; 
		case 0:
		default:
			cout << "不打折" << endl;
			break;
	}
	cout << "switch语句之后" << endl;

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
