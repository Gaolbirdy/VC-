// ���ݽṹ.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
//#include <cstring>
using namespace std;

void printBook(struct Books *book);

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

typedef	struct
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} Book;

typedef long int *pint32;

int main()
{
	Books book1;
	Books book2;

	Book book3, book4;

	pint32 x, y, z;
	
	strcpy(book1.title, "C++�̳�");
	strcpy(book1.author, "Runoob");
	strcpy(book1.subject, "�������");
	book1.book_id = 12345;

	strcpy(book2.title, "CSS �̳�");
	strcpy(book2.author, "Runoob");
	strcpy(book2.subject, "ǰ�˼���");
	book2.book_id = 12346;

	/*cout << "��һ������⣺" << book1.title << endl;
	cout << "��һ�������ߣ�" << book1.author << endl;
	cout << "��һ������Ŀ��" << book1.subject << endl;
	cout << "��һ����ID��" << book1.book_id << endl;

	cout << "�ڶ�������⣺" << book2.title << endl;
	cout << "�ڶ��������ߣ�" << book2.author << endl;
	cout << "�ڶ�������Ŀ��" << book2.subject << endl;
	cout << "�ڶ�����ID��" << book2.book_id << endl;*/

	printBook(&book1);
	printBook(&book2);

	return 0;
}

void printBook(struct Books *book)
{
	cout << "����⣺" << book->title << endl;
	cout << "�����ߣ�" << book->author << endl;
	cout << "����Ŀ��" << book->subject << endl;
	cout << "��ID��" << book->book_id << endl;
}

