#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����c����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

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

