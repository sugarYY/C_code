#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用c，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

int DigitSum(int x)
{
	if (x > 9)
	{
		return x % 10 + DigitSum(x / 10);
	}
	else
		return x;
}

int main()
{
	int num = 1729;
	int ret = DigitSum(num);
	printf("%d\n", ret);
	return 0;
}

