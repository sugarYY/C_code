#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个Max函数，用来比较两个数的较大值
int Max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
	return 0;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入a：\n");
	scanf("%d", &a);
	//取a值
	printf("请输入b：\n");
	scanf("%d", &b);
	//取b值
	int max = Max(a, b);
	//调用Max函数
	printf("较大值是%d\n", max);
	return 0;
}