#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//��ӡ����
void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 1;
	int j = 1;
	printf("-------------------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= ROW; i++)
	{
		printf("%d ", i);

		for (j = 1; j <= COL; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
		
	}
	printf("-------------------\n");

}

//����
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY;
	while (count)
	{
		int x = rand() % 9 + 1;//1-9
		int y = rand() % 9 + 1;//1-9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//�����������׵ĸ���
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	//����1��
	/*int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;*/
	//����2��
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] -
		8 * '0';
}

//ɨ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int num = 0;
	while (num < row*col - EASY)
	{
		int x = 0;
		int y = 0;
		printf("���������꣺>");
		scanf("%d%d", &x, &y);
		//�ж������Ƿ�Ϸ�
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '0')
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count+'0';
				PrintBoard(show, row, col);
				num++;
			}
			else
			{
				printf("���ź������ѱ�ը����\n");
				PrintBoard(mine, row, col);
				break;
			}
		}
		else
		{
			printf("���겻�Ϸ�\n");
		}
		if (num == row*col - EASY)
		{
			printf("���׳ɹ���\n");
			break;
		}
	}
	
}