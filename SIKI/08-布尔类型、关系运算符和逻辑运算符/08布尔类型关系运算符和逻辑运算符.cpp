// 08�������͹�ϵ��������߼������.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//bool a = true;	// �� �� ���� 1
	//bool b = false;	// �� û�� ������ 0
	//bool isDead = false;
	//int hp = 87;

	//isDead = (hp <= 0);
	//cout << "��ɫ�������� " << isDead << endl;

	//int a = 90;
	//int b = 80;
	//bool res1 = a < b;	// false
	//bool res2 = a > b;	// true
	//bool res3 = a <= b;	// false
	//bool res4 = a >= b;	// true
	//bool res5 = a == b;	// false
	//bool res6 = a != b;	// true;

	//cout << res1 << res2 << res3 << res4 << res5 << res6 << endl;

	// �߼������
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

	cout << (!true) << endl;	// ��
	cout << (!false) << endl << endl;

	cout << (true ^ true) << endl;
	cout << (true ^ false) << endl;
	cout << (false ^ true) << endl;
	cout << (false ^ false) << endl << endl;

	return 0;
}

