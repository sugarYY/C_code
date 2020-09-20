#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*****************************\n");
	printf("*********  1. play  *********\n");
	printf("*********  0. exit  *********\n");
	printf("*****************************\n");
}

//游戏设计部分
void game()
{
	//隐藏 
	char mine[ROWS][COLS] = { 0 };
	//展示
	char show[ROWS][COLS] = { 0 };
	srand((unsigned int)time(NULL));//设置随机数生成起点

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//PrintBoard(mine, ROW, COL);//无需打印
	PrintBoard(show, ROW, COL);

	//1.放雷
	SetMine(mine, ROW, COL);
	//PrintBoard(mine, ROW, COL);//test

	//2.扫雷
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入：>");
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
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}