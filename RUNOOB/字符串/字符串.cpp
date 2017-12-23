// 字符串.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//int main()
//{
//	char greeting[6] = { 'H','e','l','l','o','\0', };
//	char greeting2[] = "Hello";
//	//char greeting3[5] = { 'H','e','l','l','o', };
//
//	cout << greeting2 << endl;
//	cout << greeting << endl;
//
//	return 0;
//}

//int main()
//{
//	char str1[11] = "Hello";
//	char str2[11] = "World";
//	char str3[11];
//	int len;
//
//	// 复制str1到str3
//	strcpy_s(str3, str1);
//	cout << "strcpy(str3, str1): " << str3 << endl;
//
//	// 连接str1和str2
//	strcat_s(str1, str2);
//	cout << "strcat(str1, str2): " << str1 << endl;
//
//	// 连接后,str1的总长度
//	len = strlen(str1);
//	cout << "strlen(str1): " << len << endl;
//
//}

//int main()
//{
//	string str1 = "Hello";
//	string str2 = "World";
//	string str3;
//	int len;
//
//	// 复制str1到str3
//	str3 = str1;
//	cout << "str3: " << str3 << endl;
//
//	// 连接str1和str2
//	str3 = str1 + str2;
//	cout << "str1 + str2: " << str3 << endl;
//
//	// 连接后,str3的总长度
//	len = str3.size();
//	cout << "str3.size(): " << len << endl;
//
//}

int main()
{
	// 定义一个string类对象
	string http = "www.runoob.com";

	// 打印字符串长度
	cout << http.length() << endl;

	// 拼接
	http.append("/C++");
	cout << http << endl;	// 打印结果为: www.runoob.com/C++

	// 删除
	int pos = http.find("C++");	// 查找"C++"在字符串中的位置
	cout << pos << endl;
	http.replace(pos, 4, "");	// 从位置pos开始，之后的4个字符替换为空，即删除
	cout << http << endl;

	// 找子串runoob
	int first = http.find_first_of(".");	// 从头开始寻找字符'.'的位置
	int last = http.find_last_of(".");	// 从尾开始寻找字符'.'的位置
	cout << first << endl;
	cout << last << endl;
	cout << http.substr(first + 1, last - first - 1) << endl;	// 提取"runoob"子串并打印
}