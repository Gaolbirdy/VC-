// ��̬�ڴ�.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//int main()
//{
//	double* pvalue = NULL;	// ��ʼ��Ϊ null ��ָ�� 
//	//pvalue = new double;	// Ϊ���������ڴ�
//	if (!(pvalue = new double))
//	{
//		cout << "Error: out of memory." << endl;
//		exit(1);
//	}
//	
//	delete pvalue;	// �ͷ� pvalue ��ָ����ڴ�
//
//	return 0;
//}

//void main()
//{
//	double* pvalue = NULL;	// ��ʼ��Ϊ null ��ָ��
//	pvalue = new double;	// Ϊ���������ڴ�
//
//	*pvalue = 29494.99;	// �ڷ���ĵ�ַ�洢ֵ
//	cout << "Value of pvalue : " << *pvalue << endl;
//
//	delete pvalue;	// �ͷ��ڴ�
//}

//void main()
//{
//	//char* pvalue = NULL;	// ��ʼ��Ϊ null ��ָ��
//	//pvalue = new char[20];	// Ϊ���������ڴ�
//
//	//delete [] pvalue;	// ɾ�� pvalue ��ָ�������
//
//	//int m = 20;
//	//// ��̬����,���鳤��Ϊ m
//	//int* array = new int[m];
//
//	//// �ͷ��ڴ�
//	//delete[] array;
//
//	int** array;
//	// �ٶ������һά����Ϊ m�� �ڶ�ά����Ϊ n
//	int m = 20, n = 10;
//	// ��̬����ռ�
//	array = new int*[m];
//	
//	for (int i = 0; i < m; i++)
//	{
//		array[i] = new int[n];
//	}
//	
//	//  �ͷ�
//	for (int i = 0; i < m; i++)
//	{
//		delete [] array[i];
//	}
//	delete[] array;
//}

//void main()
//{
//	int** p;
//	int i, j;	// p[4][8]
//	// ��ʼ����4��8�еĶ�ά����
//	p = new int*[4];
//	for (i= 0; i < 4; i++)
//	{
//		p[i] = new int[8];
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			p[i][j] = j * i;
//		}
//	}
//
//	// ��ӡ����
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if (j == 0)
//				cout << endl;
//			cout << p[i][j] << "\t";
//		}
//	}
//
//	// ��ʼ�ͷ�����Ķ�
//	for (i = 0; i < 4; i++)
//	{
//		delete [] p[i];
//	}
//	delete[] p;
//}


//void main()
//{
//	int*** array;
//	// �ٶ������һάΪ m�� �ڶ�άΪ n�� ����άΪh
//	int m = 3, n = 4, h = 5;
//	// ��̬����ռ�
//	array = new int**[m];
//	for (int i = 0; i < m; i++)
//	{
//		array[i] = new int*[n];
//		for (int j = 0; j < n; j++)
//		{
//			array[i][j] = new int[h];
//		}
//	}
//
//	// �ͷ�
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			delete [] array[i][j];
//		}
//		delete [] array[i];
//	}
//	delete [] array;
//}

//void main()
//{
//	int i, j, k;	// p[2][3][4]
//
//	int*** p;
//	p = new int**[2];
//	for (i = 0; i < 2; i++)
//	{
//		p[i] = new int*[3];
//		for (j = 0; j < 3; j++)
//		{
//			p[i][j] = new int[4];
//		}
//	}
//
//	// ��� p[i][j][k] ��ά����
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			for (k = 0; k < 4; k++)
//			{
//				p[i][j][k] = i + j + k;
//				cout << p[i][j][k];
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//
//	// �ͷ��ڴ�
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			delete[] p[i][j];
//		}
//	}
//	for (i = 0; i < 2; i++)
//	{
//		delete[] p[i];
//	}
//	delete[] p;
//}


class Box
{
	public:
		Box()
		{
			cout << "���ù��캯����" << endl;
		}
		~Box()
		{
			cout << "��������������" << endl;
		}
};

void main()
{
	Box* myBoxArray = new Box[4];

	delete[] myBoxArray;	// ɾ������
}