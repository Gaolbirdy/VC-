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

int main()
{
	/*float enemy1X, enemy1Y, enemy1Z;
	float enemy2X, enemy2Y, enemy2Z;*/

	Position enemy1Pos;
	enemy1Pos.x = 1;
	enemy1Pos.y = 2;
	enemy1Pos.z = 3;
	cout << enemy1Pos.x << endl;
	//cout << enemy1Pos << endl;

	Position enemy2Pos;
	
	return 0;
}

