// 数据结构.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main()
{
	Books book1;
	Books book2;

	strcpy(book1.title, "C++教程");

    return 0;
}

