#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ӡ1000�굽2000��֮�������
//������ ǰ��λ%4=0Ϊ����
//�������� ����λ%4=0Ϊ����

int main()
{
	int year = 1000;
	while (year <= 2000)
	{
		if (year % 100 == 0)//������
		{
			if ((year / 100) % 4 == 0)//yearǰ��λ%4
			{
				printf("%d ", year);
			}
		}
		else//��������
		{
			if ((year % 100) % 4 == 0)//year����λ%4
			{
				printf("%d ", year);
			}
		}
		year++;
	}
	return 0;
}