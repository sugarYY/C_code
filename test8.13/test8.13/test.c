#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int cp = 0;
	//彩票
	int dn = 0;
	//大牛
	while (cp == 0&&dn == 0)
	{
		printf("买彩票\n");
		//判断是否中彩票
		printf("是否中彩票(1/0)\n");
		scanf("%d", &cp);
		if (cp == 1)
		{
			break;
		}
		else
		{
			printf("老实学习\n");
			//判断是否成为大牛
			printf("是否成为大牛(1/0)\n");
			scanf("%d", &dn);
			if (dn == 1)
			{
				break;
			}
		}
	}
	if (cp == 1 || dn == 1)
	{
		printf("赢取白富美\n");
	}
	return 0;
}
//int main()
//{
//	int line = 0;
//	printf("好好学习\n");
//	while (line < 20)
//	{
//		printf("我敲代码：%d行\n", line);
//		line++;
//	}
//	if (line >= 20)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("你要好好学习吗(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}