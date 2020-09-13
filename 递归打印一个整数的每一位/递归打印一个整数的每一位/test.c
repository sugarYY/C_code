#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//递归方式实现打印一个整数的每一位

void print(int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d ", x % 10);

}

int main()
{
	int a = 1234;
	print(a);
	return 0;
}