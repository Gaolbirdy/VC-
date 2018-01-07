// 13结构体.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct Position
{
	float x;
	float y;
	float z;
};

//struct Enemy
//{
//	string name;
//	int hp;
//	int attack;
//	Position pos;
//};

int main()
{
	/*float enemy1X, enemy1Y, enemy1Z;
	float enemy2X, enemy2Y, enemy2Z;*/

	//Position enemy1Pos = { 100,20,90 };
	/*enemy1Pos.x = 1;
	enemy1Pos.y = 2;
	enemy1Pos.z = 3;*/
	//cout << enemy1Pos.z << endl;
	//cout << enemy1Pos << endl;

	/*Position enemy2Pos;
	
	Enemy e1 = { "popo",100,50,{1,1,1} };
	e1.pos = { 10,9,8 };

	cout << e1.pos.x << endl;

	Enemy e2;
	e2.pos = { 0,0,0 };*/

	auto x = 9;
	int y = 8;
	cout << sizeof(x);
	cout << sizeof(y);
	x = 1.3;
	cout << sizeof(x);

	return 0;
}

