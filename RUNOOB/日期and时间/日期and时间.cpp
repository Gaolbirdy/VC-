// ����andʱ��.cpp: �������̨Ӧ�ó������ڵ㡣
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

	printf("�� 1970-01-01 ������� = %ld\n", seconds);
	printf("�� 1970-01-01 ���Сʱ�� = %ld\n", seconds / 3600);
}
