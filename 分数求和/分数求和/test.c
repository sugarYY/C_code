#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//�����������������߶���������ʱ�򣬽��Ϊ����
//                 ֻҪ��һ�������������Ϊ������

int main()
{
	int i = 1;
	float j = 1.0;
	int flag = 1;
	for (i = 2; i <= 100; i++)
	{
		j = j - flag*1.0 / i;
		flag = -flag;
	}
	printf("%f\n", j);
	return 0;
}


//int main()
//{
//	int i = 1;
//	float j = 1.0;
//	for (i = 2; i <= 100; i++)
//	{
//		if ((i % 2) == 0)//ż����
//		{
//			j = j - 1.0 / i;
//		}
//		else//������
//		{
//			j = j + 1.0 / i;
//		}
//	}
//	printf("%f\n", j);
//	return 0;
//}