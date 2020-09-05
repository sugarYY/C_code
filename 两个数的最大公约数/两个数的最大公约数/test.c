#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//给定两个数，求这两个数的最大公约数

int main()
{
	int i = 2;
	int a = 17;
	int b = 19;
	for (i = 2; i <= a && i <= b; i++)
	{
		if ((0 == a%i) && (0 == b%i))
		{
			break;
		}
	}
	if ((0 == a%i) && (0 == b%i))
	{
		printf("%d\n", a / i);
	}
	else//两个质数
	{
		printf("%d\n", 1);
	}
	return 0;
}