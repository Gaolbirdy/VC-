#include "stdafx.h"
#include "WalkEnemy.h"


WalkEnemy::WalkEnemy()
{
}

WalkEnemy::WalkEnemy(int hp, int damage, int mp) :Enemy(hp, damage, mp)
{

}

WalkEnemy::~WalkEnemy()
{
}

void WalkEnemy::Walk()
{
	cout << "正在行走" << endl;
}
