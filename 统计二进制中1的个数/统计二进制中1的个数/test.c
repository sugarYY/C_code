#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1

int count_one(int x)
{
	int i = 0; 
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((x >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int a = 15;
	int ret = count_one(a);
	printf("%d\n", ret);
	return 0;
}

