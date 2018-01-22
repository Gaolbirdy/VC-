// 信号处理.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <csignal>
//#include <unistd.h>
#include <windows.h>

using namespace std;

void signalHandler(int signum)
{
	cout << "Interrupt signal (" << signum << ") received.\n";

	// 清理并关闭
	// 终止程序 
	exit(signum);
}

//int main()
//{
//	// 注册信号 SIGINT 和信号处理程序
//	signal(SIGINT, signalHandler);
//
//	while (1)
//	{
//		cout << "Going to sleep...." << endl;
//		Sleep(1000);
//	}
//	
//	return 0;
//}

void main()
{
	int i = 0;
	// 注册信号 SIGINT 和信号处理程序
	signal(SIGINT, signalHandler);

	while (++i)
	{
		cout << "Going to sleep...." << endl;
		if (i == 3)
		{
			raise(SIGINT);
		}
		Sleep(1000);
	}
}

