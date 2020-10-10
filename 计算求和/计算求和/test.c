#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222


int main()
{
	int a = 0;
	int i = 0;
	int n = 0;
	int k = 0;
	int sum = 0;
	scanf("%d%d", &a, &n);
	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum = sum + k;
	}
	printf("%d\n", sum);
	return 0;
}