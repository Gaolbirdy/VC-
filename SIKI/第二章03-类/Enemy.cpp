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
	cout << "���Ź�������" << endl;
	cout << "���Ź�����Ч" << endl;
	cout << "�ñ�����������" << endl;
}

void Enemy::TakeDamage()
{
	cout << "�������˶���" << endl;
	cout << "����������Ч" << endl;
	cout << "��������Ѫ��" << endl;
	HP--;
}

int Enemy::GetMP()
{
	return MP;
}