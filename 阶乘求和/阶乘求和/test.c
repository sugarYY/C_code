#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// ���� 1!+2!+3!+����+10!

int main()
{
	int n = 10;//���������������Ľ׳�
	int ret1 = 1;
	int i = 1;
	int j = 1;
	int ret2 = 0;
	for (i = 1; i <= n; i++)
	{
		ret1 *= i;
		ret2 += ret1;
	}
	printf("%d\n", ret2);
	return 0;
}