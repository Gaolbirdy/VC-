#include "stdafx.h"
#include "Enemy.h"


Enemy::Enemy(int hp, int damage, int mp)
{
	HP = hp;
	Damage = damage;
	MP = mp;
}

Enemy::Enemy()
{
	HP = 99;
	Damage = 9;
	MP = 50;
}

Enemy::~Enemy()
{
}

void Enemy::Attack()
{
	cout << "播放攻击动作" << endl;
	cout << "播放攻击特效" << endl;
	cout << "让被攻击的受伤" << endl;
}

void Enemy::TakeDamage()
{
	cout << "播放受伤动作" << endl;
	cout << "播放受伤特效" << endl;
	cout << "减少自身血量" << endl;
	HP--;
}

int Enemy::GetMP()
{
	return MP;
}