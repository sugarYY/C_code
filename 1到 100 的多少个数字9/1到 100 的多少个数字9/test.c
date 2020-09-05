#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1到 100 的所有整数中出现多少个数字9

int main()
{
	int i = 1;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i / 10 == 9)//十位出现9
			count++;
		if (i % 10 == 9)//个位出现9
			count++;
	}
	if (101 == i)
	{
		printf("%d\n", count);
	}
	return 0;
}