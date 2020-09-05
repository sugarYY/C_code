#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//打印1000年到2000年之间的闰年
//整百年 前两位%4=0为闰年
//非整百年 后两位%4=0为闰年

int main()
{
	int year = 1000;
	while (year <= 2000)
	{
		if (year % 100 == 0)//整百年
		{
			if ((year / 100) % 4 == 0)//year前两位%4
			{
				printf("%d ", year);
			}
		}
		else//非整百年
		{
			if ((year % 100) % 4 == 0)//year后两位%4
			{
				printf("%d ", year);
			}
		}
		year++;
	}
	return 0;
}