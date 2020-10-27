#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//a说：不是我。
//b说：是c。   
//c说：是d。   
//d说：c在胡说 
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//1个凶手 0010     word 1101
//凶手是C

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
//		if (word[0] == 1)//1说：不是我
//		{
//			murder[0] = 0;
//		}
//		if (word[1] == 1)//2说：是3
//		{
//			murder[2] = 1;
//		}
//		if (word[2] == 1)//3说：是4
//		{
//			murder[3] = 1;
//		}
//		if (word[3] == 1)//4说：3在胡说
//		{
//			word[2] = 0;
//		}
//		for (j = 0; j < 4; j++)//凶手数
//		{
//			if (1 == murder[j])
//			{
//				count1++;
//			}
//		}
//		for (j = 0; j < 4; j++)//说真话数
//		{
//			if (1 == word[j])
//			{
//				count2++;
//			}
//		}
//		if (1 == count1 && 3 == count2)//一个凶手 三个真话
//		{
//			break;
//		}
//
//		//恢复初始状态
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
//			printf("凶手是%d\n", j + 1);
//			break;
//		}
//	}
//
//	return 0;
//}