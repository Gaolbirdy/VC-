// 15ö������.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

enum Weekday
{
	Monday = 1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

enum HeroType
{
	Master,
	Soldier,
	Assassin,
	Tank
};

void main()
{
	int weekday = 1;

	Weekday day = Friday;

	//cout << (Weekday)day << endl;
	cout << day << endl;
	day = Sunday;
	cout << day << endl;

	HeroType h = Assassin;
	h = Tank;
	cout << h << endl;
	h = Master;

	if (h == Master)
	{
		cout << "Ӣ���Ƿ�ʦ" << endl;
	}
}
