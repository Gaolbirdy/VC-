#pragma once
class Enemy
{
public:
	int HP;
	int Damage;

	Enemy(int hp, int damage, int mp);
	Enemy();
	~Enemy();
	void Attack();
	void TakeDamage();
	int GetMP();

private:
	int MP;

};
