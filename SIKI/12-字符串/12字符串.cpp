// 12字符串.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "www.sikiedu.com";
	//char c = s[4];
	//cout << c << endl;
	//cout << s[5] << endl;
	//cout << s[6] << endl;
	////cout << s[20] << endl;

	/*for (char c : s)
	{
		cout << c << endl;
	}

	char c = 'c';
	cout << islower(c) << endl;
	cout << isupper(c) << endl;
	
	putchar(tolower(c));
	putchar(toupper(c));*/


	/*cout << tolower(c) << endl;
	cout << toupper(c) << endl;*/

	/*int num;
	cin >> num;
	cout << num;*/

	/*string name, name2, name3;
	cin >> name;
	cin >> name2;
	cin >> name3;
	cout << "你输入的是：" << name << ":" << name2 << ":" << name3 << endl;*/

	string l;
	getline(cin, l);
	cout << "你输入的是：" << l << endl;

    return 0;
}
