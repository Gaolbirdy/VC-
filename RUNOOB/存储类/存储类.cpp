// �洢��.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;


// ��������
void func(void);

static int counts = 10;	// ȫ�ֱ���

int main()
{
	//auto f = 3.14;	//	double
	//auto s("Hello");	// const char*
	//auto z = new auto(9);	// int*
	//auto c('C');
	////auto x1 = 5, x2 = 50.0, x3 = 'r';	//���󣬱����ǳ�ʼ��Ϊͬһ����
	//cout << f << endl;
	//cout << s << endl;
	//cout << z << endl;
	//cout << c << endl;

	//register int miles = 100;
	//cout << miles << endl;

	/*int count = 5;
	while (count--)
	{
		cout << count << endl;
	}
	cout << count << endl;*/

	while (counts--)
	{
		func();
	}

    return 0;
}

// ��������
void func(void)
{
	static int i = 5;	// �ֲ���̬����
	i++;
	cout << "���� i Ϊ " << i;
	cout << "������ count Ϊ " << counts << endl << endl;
}

