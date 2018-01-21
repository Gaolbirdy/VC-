// 异常处理.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <exception>

using namespace std;

//double division(int a, int b)
//{
//	if (b == 0)
//	{
//		throw "Division by zero condition!";
//	}
//
//	return (a / b);
//}
//
//int main()
//{
//	int x = 50;
//	int y = 0;
//	double z = 0;
//
//	try
//	{
//		z = division(x, y);
//		cout << z << endl;
//	}
//	catch (const char* msg)
//	{
//		cerr << msg << endl;
//	}
//    return 0;
//}

struct MyException : public exception
{
	const char* what() const throw()
	{
		return "C++ Exception";
	}
};

void main()
{
	try
	{
		throw MyException();
	}
	catch (MyException& e)
	{
		std::cout << "MyException caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(std::exception& e)
	{
	}
}