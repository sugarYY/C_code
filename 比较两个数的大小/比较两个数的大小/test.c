#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ��Max�����������Ƚ��������Ľϴ�ֵ
int Max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
	return 0;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("������a��\n");
	scanf("%d", &a);
	//ȡaֵ
	printf("������b��\n");
	scanf("%d", &b);
	//ȡbֵ
	int max = Max(a, b);
	//����Max����
	printf("�ϴ�ֵ��%d\n", max);
	return 0;
}