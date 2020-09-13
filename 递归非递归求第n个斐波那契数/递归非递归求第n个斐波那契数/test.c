#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//非递归实现求第n个斐波那契数
//1 1 2 3 5 8 13 21 34 55

int fabo1(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}


//递归实现求第n个斐波那契数

int fabo2(int x)
{
	if (x > 2)
	{
		return fabo2(x - 1) + fabo2(x - 2);
	}
	return 1;
}

int main()
{
	int n = 10;
	int ret1 = fabo1(n);
	int ret2 = fabo2(n);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return 0;
}