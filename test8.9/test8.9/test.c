#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ��Max�����������Ƚ��������Ľϴ�ֵ
int Max(int x, int y)
{
	if (x > y)
	{
		printf("�ϴ�ֵ��a=%d\n", x);
	}
	if (x < y)
	{
		printf("�ϴ�ֵ��b=%d\n", y);
	}
	if (x==y)
	{
		printf("���������\n");
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
	Max(a, b);    
	//����Max����
	return 0;
}