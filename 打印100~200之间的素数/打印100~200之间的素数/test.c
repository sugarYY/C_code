#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//打印100~200之间的素数

int main()
{
	int num = 100;
	int i = 2;
	for (num = 100; num <= 200; num++)
	{
		for (i = 2; i < num; i++)//判断一个数是不是素数
		{
			if (num%i == 0)//不是素数跳出
				break;
		}
		if (i == num)//是素数
		{
			printf("%d ", num);
		}
	}
	return 0;
}