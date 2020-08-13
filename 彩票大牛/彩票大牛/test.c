#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int cp = 0;
	//彩票
	int dn = 0;
	//大牛
	while (cp == 0 && dn == 0)
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