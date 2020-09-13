#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//编写一个函数实现n的k次方，使用递归实现。

double func(int x, int y)
{
	if (y > 0)
	{
		return (double)x*func(x, y - 1);
	}
	if (0 == y)
	{
		return 1;
	}
	if (y <= 0)
	{
		return 1 / func(x, -y);
	}
}

int main()
{
	int n = 2;
	int k = -3;
	double ret = func(n, k);
	printf("%lf\n", ret);
	return 0;
}