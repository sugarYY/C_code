#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//a˵�������ҡ�
//b˵����c��   
//c˵����d��   
//d˵��c�ں�˵ 
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

//1������ 0010     word 1101
//������C

int main()
{
	int killer = 'a';
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == '4') + (killer != '3') == 3)
		{
			printf("%c\n", killer);
		}
	}
}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int word[4] = { 1, 1, 1, 1 };
//	int murder[4] = { 0, 0, 0, 0 };
//
//	for (i = 0; i < 4; i++)
//	{
//		int count1 = 0;
//		int count2 = 0;
//		word[i] = 0;
//		if (word[0] == 1)//1˵��������
//		{
//			murder[0] = 0;
//		}
//		if (word[1] == 1)//2˵����3
//		{
//			murder[2] = 1;
//		}
//		if (word[2] == 1)//3˵����4
//		{
//			murder[3] = 1;
//		}
//		if (word[3] == 1)//4˵��3�ں�˵
//		{
//			word[2] = 0;
//		}
//		for (j = 0; j < 4; j++)//������
//		{
//			if (1 == murder[j])
//			{
//				count1++;
//			}
//		}
//		for (j = 0; j < 4; j++)//˵�滰��
//		{
//			if (1 == word[j])
//			{
//				count2++;
//			}
//		}
//		if (1 == count1 && 3 == count2)//һ������ �����滰
//		{
//			break;
//		}
//
//		//�ָ���ʼ״̬
//		for (j = 0; j < 4; j++)
//		{
//			word[j] = 1;
//			murder[j] = 0;
//		}
//	}
//	for (j = 0; j < 4; j++)
//	{
//		if (1 == murder[j])
//		{
//			printf("������%d\n", j + 1);
//			break;
//		}
//	}
//
//	return 0;
//}