// 日期and时间.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

//int main()
//{
//	// 基于当前系统的当前日期/时间
//	time_t now = time(0);
//
//	// 把 now 转换为字符串形式
//	char *dt = ctime(&now);
//
//	cout << "本地日期和时间：" << dt << endl;
//	cout << ctime(&now) << endl;
//
//	// 把now转换为tm结构
//	tm *gmtm = gmtime(&now);
//	dt = asctime(gmtm);
//	cout << "UTC 日期和时间：" << dt << endl;
//	cout << "UTC 日期和时间：" << asctime(gmtm) << endl;
//
//	return 0;
//}

void main()
{
	// 基于当前系统的当前日期/时间
	time_t now = time(0);

	cout << "1970到目前经过秒数：" << now << endl;

	tm *ltm = localtime(&now);

	// 输出tm结构的各个组成部分
	cout << "年：" << 1900 + ltm->tm_year << endl;
	cout << "月：" << 1 + ltm->tm_mon << endl;
	cout << "日：" << ltm->tm_mday << endl;
	cout << "时间：" << ltm->tm_hour << ":";
	cout << ltm->tm_min << ":";
	cout << ltm->tm_sec << endl;

}