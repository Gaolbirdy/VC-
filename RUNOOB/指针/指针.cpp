// ָ��.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//int main()
//{
//	int var1;
//	char var2[10];
//	int var3[5];
//
//	cout << "var1�����ĵ�ַ: ";
//	cout << &var1 << endl;
//	cout << var1 << endl;
//
//	cout << "var2�����ĵ�ַ: ";
//	cout << &var2 << endl;
//	//cout << var2 << endl;	// ?
//	
//	cout << "var3�����ĵ�ַ: ";
//	cout << &var3 << endl;
//	cout << var3 << endl;
//
//	int *ip;	// һ�����͵�ָ��
//	double *dp;	// һ��double�͵�ָ��
//	float *fp;	// һ�������͵�ָ��
//	char *cp;	// һ���ַ��͵�ָ��
//
//	return 0;
//}

//int main()
//{
//	int var = 20;	// ʵ�ʱ���������
//	int *ip;	// ָ�����������
//
//	ip = &var;	// ��ָ������д洢var�ĵ�ַ
//
//	cout << "Value of var variable: ";
//	cout << var << endl;
//	//cout << *(&var) << endl;
//	//cout << *&(*(&var)) << endl;
//
//	// ���var�����ĵ�ַ
//	cout << "Address of var variable: ";
//	cout << &var << endl;
//	//cout << &(*(&var)) << endl;
//
//	// �����ָ������д洢�ĵ�ַ
//	cout << "Address stored in ip variable: ";
//	cout << ip << endl;
//
//	// ���ָ������ĵ�ַ
//	cout << "Address of ip variable: ";
//	cout << &ip << endl;
//
//	// ����ָ���е�ַ��ֵ
//	cout << "Value of *ip variable: ";
//	cout << *ip << endl;
//
//	/*cout << &(*ip) << endl;
//	cout << *(&ip) << endl;*/
//
//}

//void main()
//{
//	int num = 110;
//	int *p = &num;
//	cout << p << endl;
//	cout << *p << endl;
//	system("pause");
//}

//void main()
//{
//	int *ptr = NULL;
//	/*int *ptr;
//	ptr = NULL;*/
//	cout << "Ptr��ֵ�� " << ptr << endl;
//	//cout << "*Ptr��ֵ�� " << *ptr << endl;	// ��ָ��û��ֵ�������
//	cout << "Ptr����ĵ�ַ�� " << &ptr << endl;
//
//	if (!ptr)
//	{
//		cout << "��ָ��" << endl;
//	}
//	else
//	{
//		cout << "�ǿ�ָ��" << endl;
//	}
//}

//const int MAX = 3;
//void main()
//{
//	int var[MAX] = { 10,100,200 };
//	int *ptr;
//
//	// ָ���е������ַ
//	ptr = var;
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Address of var[" << i << "] = ";
//		cout << ptr << endl;
//
//		cout << "Value of var[" << i << "] = ";
//		cout << *ptr << endl;
//
//		// �ƶ�����һ��λ�ã��ڴ��ַ����һ��int�ĳ��ȣ�������4���ֽ�
//		ptr++;
//	}
//}

//const int MAX = 3;
//int main()
//{
//	int var[MAX] = { 10,100,200 };
//	int *ptr;
//	
//	// ָ�������һ��Ԫ�صĵ�ַ
//	ptr = &var[MAX - 1];
//
//	for (int i = MAX; i > 0; i--)
//	{
//		cout << "Address of var[" << i << "] = ";
//		cout << ptr << endl;
//
//		cout << "Value of var[" << i << "] = ";
//		cout << *ptr << endl;
//
//		// �ƶ�����һ��λ�ã��ڴ��ַ�ݼ�һ��int�ĳ��ȣ�������4���ֽ�
//		ptr--;
//	}
//
//	//ptr = var + (MAX - 1);
//	/*cout << &var[0] << endl;
//	cout << var << endl;
//	cout << &var[MAX - 1] << endl;
//	cout << var + (MAX - 1) << endl;*/
//
//	/*char var2[MAX] = "ab";
//	cout << &var2[0] << endl;
//	cout << var2 << endl;
//	cout << &var2[MAX - 1] << endl;
//	cout << var2 + (MAX - 1) << endl;*/
//
//	/*short a = 1;
//	short *p = &a;
//	cout << p << endl;
//	cout << p + 1 << endl;*/
//
//	/*char a = 'a';
//	char *p = &a;
//	cout << p << endl;
//	cout << p + 1 << endl;*/
//
//}

//const int MAX = 3;
//void main()
//{
//	int var[MAX] = { 10,100,200 };
//	int *ptr;
//
//	ptr = var;
//	int i = 0;
//
//	while (ptr <= &var[MAX - 1])
//	{
//		cout << "Address of var[" << i << "] = ";
//		cout << ptr << endl;
//		
//		cout << "Value of var[" << i << "] = ";
//		cout << *ptr << endl;
//
//		// ָ����һ��λ��
//		ptr++;
//		i++;
//	}
//}

//const int MAX = 3;
//void main()
//{
//	int var[MAX] = { 10,100,200 };
//	int *ptr;
//
//	// ָ���е������ַ
//	ptr = var;
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "var[" << i << "]���ڴ��ַΪ ";
//		cout << ptr << endl;
//
//		cout << "var[" << i << "]��ֵΪ ";
//		cout << *ptr << endl;
//
//		// �ƶ�����һ��λ��
//		ptr++;
//	}
//}

//const int MAX = 3;
//void main()
//{
//	int var[MAX] = { 10,100,200 };
//	//*(var + 2) = 500;
//	//cout << *(&var[2]) << endl;
//	
//	int *p = var;
//	for (int i = 0; i < MAX; i++)
//	{
//		*p = i;	// ������ȷ���﷨
//		//var++;	// ���ǲ���ȷ��
//		cout << var[i] << endl;
//		p++;
//	}
//}

//const int MAX = 3;
//int main()
//{
//	int var[MAX] = { 10,100,200 };
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Value of var[" << i << "] = ";
//		cout << var[i] << endl;
//	}
//
//	int *ptr[MAX];
//}

//const int MAX = 3;
//void main()
//{
//	int var[MAX] = { 10,100,200 };
//	int *ptr[MAX];	// ָ��������ָ������
//
//	for (int i = 0; i < MAX; i++)
//	{
//		ptr[i] = &var[i];	// ��ֵΪ�����ĵ�ַ
//	}
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Address of var[" << i << "] = ";
//		cout << var + i << endl;
//	}
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Value of ptr[" << i << "] = ";
//		cout << ptr[i] << endl;
//	}
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Value of *ptr[" << i << "] = ";
//		cout << *ptr[i] << endl;
//	}
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Value of var[" << i << "] = ";
//		//cout << *(&var[i]) << endl;
//		cout << *(var + i) << endl;
//	}
//
//}

//const int MAX = 4;
//void main()
//{
//	char c[] = "hello";
//	char *p = c;
//	cout << p << endl;
//	cout << *p << endl << endl;
//
//	// ָ���ַ���ָ������
//	const char *names[MAX] =
//	{
//		"Zara Ali",
//		"Hina Ali",
//		"Nuha Ali",
//		"Sara Ali"
//	};
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Value of names[" << i << "] = ";
//		cout << names[i] << endl;
//		cout << *names[i] << endl;
//	}
//
//	for (int i = 0; i < MAX; i++)
//	{
//		cout << "Address of names[" << i << "] = ";
//		cout << &names[i] << endl;
//	}
//
//}

void main()
{


}
