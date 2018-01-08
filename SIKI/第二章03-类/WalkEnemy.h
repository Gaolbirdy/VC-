#pragma once
#include "Enemy.h"
class WalkEnemy : public Enemy
{
public:
	WalkEnemy(int hp, int damage, int mp);
	WalkEnemy();
	~WalkEnemy();
	void Walk();
};

