// 日期and时间.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <istream>
//#include <ctime>

#include <stdio.h>
#include <time.h>
using namespace std;

void main()
{
	time_t seconds;

	seconds = time(NULL);

	printf("自 1970-01-01 起的秒数 = %ld\n", seconds);
	printf("自 1970-01-01 起的小时数 = %ld\n", seconds / 3600);
}
