// �ַ���.cpp: �������̨Ӧ�ó������ڵ㡣
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
//	// ����str1��str3
//	strcpy_s(str3, str1);
//	cout << "strcpy(str3, str1): " << str3 << endl;
//
//	// ����str1��str2
//	strcat_s(str1, str2);
//	cout << "strcat(str1, str2): " << str1 << endl;
//
//	// ���Ӻ�,str1���ܳ���
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
//	// ����str1��str3
//	str3 = str1;
//	cout << "str3: " << str3 << endl;
//
//	// ����str1��str2
//	str3 = str1 + str2;
//	cout << "str1 + str2: " << str3 << endl;
//
//	// ���Ӻ�,str3���ܳ���
//	len = str3.size();
//	cout << "str3.size(): " << len << endl;
//
//}

int main()
{
	// ����һ��string�����
	string http = "www.runoob.com";

	// ��ӡ�ַ�������
	cout << http.length() << endl;

	// ƴ��
	http.append("/C++");
	cout << http << endl;	// ��ӡ���Ϊ: www.runoob.com/C++

	// ɾ��
	int pos = http.find("C++");	// ����"C++"���ַ����е�λ��
	cout << pos << endl;
	http.replace(pos, 4, "");	// ��λ��pos��ʼ��֮���4���ַ��滻Ϊ�գ���ɾ��
	cout << http << endl;

	// ���Ӵ�runoob
	int first = http.find_first_of(".");	// ��ͷ��ʼѰ���ַ�'.'��λ��
	int last = http.find_last_of(".");	// ��β��ʼѰ���ַ�'.'��λ��
	cout << first << endl;
	cout << last << endl;
	cout << http.substr(first + 1, last - first - 1) << endl;	// ��ȡ"runoob"�Ӵ�����ӡ
}