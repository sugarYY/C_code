#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1�� 100 �����������г��ֶ��ٸ�����9

int main()
{
	int i = 1;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i / 10 == 9)//ʮλ����9
			count++;
		if (i % 10 == 9)//��λ����9
			count++;
	}
	if (101 == i)
	{
		printf("%d\n", count);
	}
	return 0;
}