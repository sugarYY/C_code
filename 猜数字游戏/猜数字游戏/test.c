#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//猜数字游戏
//1.电脑随机生成一个数字
//2.玩家猜数字

void menu()
{
	printf("********************************\n");
	printf("*********   1.start   **********\n");
	printf("*********   0.exit    **********\n");
	printf("********************************\n");
}
void game()
{
	int guess =0;
	//生成随机数
	int ret = rand()%100+1;
	//猜数字
	
	while (1)
	{
		printf("请输入你猜的数字：>");
	    scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess == ret)
		{
			printf("猜对了\n");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
	}
}

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				//猜数字
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}

	}while(input);
	return 0;
}