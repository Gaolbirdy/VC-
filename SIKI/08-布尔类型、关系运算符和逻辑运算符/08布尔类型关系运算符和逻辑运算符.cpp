// 08布尔类型关系运算符和逻辑运算符.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//bool a = true;	// 真 有 存在 1
	//bool b = false;	// 假 没有 不存在 0
	//bool isDead = false;
	//int hp = 87;

	//isDead = (hp <= 0);
	//cout << "角色死亡了吗？ " << isDead << endl;

	//int a = 90;
	//int b = 80;
	//bool res1 = a < b;	// false
	//bool res2 = a > b;	// true
	//bool res3 = a <= b;	// false
	//bool res4 = a >= b;	// true
	//bool res5 = a == b;	// false
	//bool res6 = a != b;	// true;

	//cout << res1 << res2 << res3 << res4 << res5 << res6 << endl;

	// 逻辑运算符
	bool isDead = false;
	bool isShow = false;
	bool isNeedToShowGameOver = (isDead == true) && (isShow == false);
	bool res = isDead && isShow;

	cout << isNeedToShowGameOver << endl;
	cout << res << endl << endl;

	cout << (true && true) << endl;	// and
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << (false && false) << endl << endl;

	cout << (true || true) << endl;	// or
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl << endl;

	cout << (true & true) << endl;
	cout << (true & false) << endl;
	cout << (false & true) << endl;
	cout << (false & false) << endl << endl;

	cout << (true | true) << endl;
	cout << (true | false) << endl;
	cout << (false | true) << endl;
	cout << (false | false) << endl << endl;

	cout << (!true) << endl;	// 非
	cout << (!false) << endl << endl;

	cout << (true ^ true) << endl;
	cout << (true ^ false) << endl;
	cout << (false ^ true) << endl;
	cout << (false ^ false) << endl << endl;

	return 0;
}

