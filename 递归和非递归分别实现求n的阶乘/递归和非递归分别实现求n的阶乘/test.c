#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////�ݹ�ʵ����n�Ľ׳ˣ���������������⣩
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


//�ǵݹ�ʵ����n�Ľ׳ˣ���������������⣩

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