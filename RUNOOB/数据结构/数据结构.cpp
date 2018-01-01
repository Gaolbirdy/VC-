// 数据结构.cpp: 定义控制台应用程序的入口点。
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
	
	strcpy(book1.title, "C++教程");
	strcpy(book1.author, "Runoob");
	strcpy(book1.subject, "编程语言");
	book1.book_id = 12345;

	strcpy(book2.title, "CSS 教程");
	strcpy(book2.author, "Runoob");
	strcpy(book2.subject, "前端技术");
	book2.book_id = 12346;

	/*cout << "第一本书标题：" << book1.title << endl;
	cout << "第一本书作者：" << book1.author << endl;
	cout << "第一本书类目：" << book1.subject << endl;
	cout << "第一本书ID：" << book1.book_id << endl;

	cout << "第二本书标题：" << book2.title << endl;
	cout << "第二本书作者：" << book2.author << endl;
	cout << "第二本书类目：" << book2.subject << endl;
	cout << "第二本书ID：" << book2.book_id << endl;*/

	printBook(&book1);
	printBook(&book2);

	return 0;
}

void printBook(struct Books *book)
{
	cout << "书标题：" << book->title << endl;
	cout << "书作者：" << book->author << endl;
	cout << "书类目：" << book->subject << endl;
	cout << "书ID：" << book->book_id << endl;
}

