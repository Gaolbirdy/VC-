// 第二章03类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Enemy.h"
#include "WalkEnemy.h"

int main()
{
	////Enemy enemy;
	//Enemy enemy = Enemy(100, 20, 999);
	////enemy.HP = 100;
	////enemy.Damage = 20;

	//cout << enemy.HP << endl;
	//cout << enemy.Damage << endl;
	//enemy.Attack();
	//enemy.TakeDamage();
	//cout << enemy.HP << endl;

	//Enemy enemy2(50, 10, 200);
	//cout << enemy2.HP << endl;
	//cout << enemy2.Damage << endl;

	//Enemy enemy3 = Enemy();
	//cout << enemy3.HP << endl;
	//cout << enemy3.Damage << endl;

	//Enemy enemy4;
	//cout << enemy4.HP << endl;
	//cout << enemy4.Damage << endl;
	//enemy4.TakeDamage();
	//enemy4.TakeDamage();
	//cout << enemy4.HP << endl;
	//cout << enemy4.GetMP() << endl;

	WalkEnemy walkEnemy = WalkEnemy();
	walkEnemy.TakeDamage();
	cout << walkEnemy.HP << endl;

	WalkEnemy walkEnemy2 = WalkEnemy(30, 30, 30);
	walkEnemy2.TakeDamage();
	cout << walkEnemy2.HP << endl;
	cout << walkEnemy2.GetMP() << endl;
	walkEnemy2.Walk();

    return 0;
}
