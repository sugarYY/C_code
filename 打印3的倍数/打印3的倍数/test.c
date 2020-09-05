#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//打印1-100之间3的倍数

int main()
{
	int i = 1;
	int ret = 1;
	while (ret<=100)
	{
		ret = i * 3;
		printf("%d ", ret);
		i++;
	}
	return 0;
}