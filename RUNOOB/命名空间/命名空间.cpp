// 命名空间.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

namespace name
{
	void code(){}
}

namespace namespace_name
{
	// 代码声明
	void code()
	{

	}
}

using namespace name;

//int main()
//{
//	namespace_name::code();	// code 可以是变量或函数
//	code();
//
//    return 0;
//}


//// 第一个命名空间
//namespace first_space
//{
//	void func()
//	{
//		cout << "Inside first_space" << endl;
//	}
//}
//
//// 第二个命名空间
//namespace second_space
//{
//	void func()
//	{
//		cout << "Inside second_space" << endl;
//	}
//}
//
//using namespace first_space;
//
//void main()
//{
//	// 调用第一个命名空间中的函数
//	func();
//
//	// 调用第二个命名空间中的函数
//	second_space::func();
//}


//using std::cout;
//
//void main()
//{
//	cout << "std::endl is used with std!" << std::endl;
//}

// 第一个命名空间
namespace first_space
{
	void func()
	{
		cout << "Inside first_space" << endl;
	}

	void funcself1()
	{
		cout << "Inside self first_space" << endl;
	}

	// 第二个命名空间
	namespace second_space
	{
		void func()
		{
			cout << "Inside second_space" << endl;
		}

		void funcself2()
		{
			cout << "Inside self second_space" << endl;
		}
	}
}

using namespace first_space::second_space;

void main()
{
	// 调用第二个命名空间中的函数
	func();
	
}