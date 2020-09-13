#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////递归实现求n的阶乘（不考虑溢出的问题）
//
//int factorial(int x)
//{
//	if (x > 1)
//	{
//		return x*factorial(x - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 5;
//	int ret = factorial(n);
//	printf("%d\n", ret);
//}


//非递归实现求n的阶乘（不考虑溢出的问题）

int main()
{
	int n = 4;
	int ret = 1;
	for (ret = 1; n > 1; n--)
	{
		ret = ret*n;
	}
	printf("%d\n", ret);
	return 0;
}