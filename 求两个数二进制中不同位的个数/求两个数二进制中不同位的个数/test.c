#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子:
//1999 2299    
//输出例子 : 7

int count_differ(int x, int y)
{
	int z = x^y;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((z>>i)&1 == 1)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int m = 1999;
	int n = 2299;
	int ret = count_differ(m,n);
	printf("%d\n", ret);
	return 0;
}