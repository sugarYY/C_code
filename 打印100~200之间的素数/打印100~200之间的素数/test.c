#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ӡ100~200֮�������

int main()
{
	int num = 100;
	int i = 2;
	for (num = 100; num <= 200; num++)
	{
		for (i = 2; i < num; i++)//�ж�һ�����ǲ�������
		{
			if (num%i == 0)//������������
				break;
		}
		if (i == num)//������
		{
			printf("%d ", num);
		}
	}
	return 0;
}