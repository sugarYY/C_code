#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void PrintBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < col; i++)
	{
		//打印数据
		int j = 0;
		for (j = 0; j < row; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < row - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//打印分隔符
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

	}
}

//玩家走
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("玩家走:>\n");

	while (1)
	{
		printf("请输入坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';//落子
				break;
			}
			else
			{
				printf("该坐标已被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标输入非法，请重新输入\n");
		}
	}

}

//电脑走
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	while (1)
	{
		int x = rand() % row;//0-2
		int y = rand() % col;//0-2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}

static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;//没空格
}

//判断输赢
char CheckWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//行判断
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//列判断
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];
		}
	}
	//对角线判断
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断是否平局
	//判断期盼是否满了 键盘是否有空格
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	else
		return 'C';
}