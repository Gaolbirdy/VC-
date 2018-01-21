// 文件和流.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

//int main()
//{
//	ofstream outfile;
//	outfile.open("file.dat", ios::out | ios::trunc);
//	outfile.close();
//
//	fstream afile;
//	afile.open("file.dat", ios::out | ios::in);
//	afile.close();
//
//    return 0;
//}

void main()
{
	char data[100];

	// 以写模式打开文件
	ofstream outfile;
	outfile.open("afile.dat");

	cout << "Writing to the file" << endl;
	cout << "Enter your name: ";
	cin.getline(data, 100);

	// 向文件写入用户输入的数据
	outfile << data << endl;

	cout << "Enter your age: ";
	cin >> data;
	cin.ignore();

	// 再次向文件写入用户输入的数据
	outfile << data << endl;

	// 关闭打开的文件
	outfile.close();

	// 以读模式打开文件
	ifstream infile;
	infile.open("afile.dat");

	cout << "Reading from the file" << endl;
	infile >> data;

	// 在屏幕上写入数据
	cout << data << endl;

	// 再次从文件读取数据，并显示它
	infile >> data;
	cout << data << endl;
	
	// 关闭打开的文件
	infile.close();
}

