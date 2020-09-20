#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("************************************\n");
	printf("*********     1. play    ***********\n");
	printf("*********     0. exit    ***********\n");
	printf("************************************\n");
}

//设计三子棋游戏

void game()
{
	char ret = 0;
	//存储数据的
	char board[ROW][COL] = { 0 };
	//数组应该初始化为空格
	InitBoard(board, ROW, COL);
	//打印棋盘
	PrintBoard(board, ROW, COL);

	//分析发现在玩游戏的过程中会出现的情况
	//1.玩家赢 - '*'
	//2.电脑赢 - '#'
	//3.平局了 - 'Q'
	//4.继续   - 'C'


	while (1)
	{
		PlayerMove(board, ROW, COL);
		//判断输赢
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;

		PrintBoard(board, ROW, COL);

		ComputerMove(board, ROW, COL);
		//判断输赢
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;

		PrintBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else if (ret == 'Q')
		printf("平局\n");
	PrintBoard(board, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}