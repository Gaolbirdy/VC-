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
	cout << "��������" << endl;
}
