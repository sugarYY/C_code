#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//��������:
//1999 2299    
//������� : 7

int count_differ(int x, int y)
{
	int z = x^y;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((z>>i)&1 == 1)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int m = 1999;
	int n = 2299;
	int ret = count_differ(m,n);
	printf("%d\n", ret);
	return 0;
}