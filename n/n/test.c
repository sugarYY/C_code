#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算n的阶乘

int main()
{
	int n = 1;
	int a = 1;
	printf("请输入一个正整数\n");
	scanf("%d", &n);
	while (n>1)
	{
		a = a*n;
		n--;
	}
	if (n = 1)
	{
		printf("%d\n", a);
	}
	return 0;
}