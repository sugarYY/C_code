#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ������
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

//��ӡ����
void PrintBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < col; i++)
	{
		//��ӡ����
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
		//��ӡ�ָ���
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

//�����
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("�����:>\n");

	while (1)
	{
		printf("���������꣺>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';//����
				break;
			}
			else
			{
				printf("�������ѱ�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
	}

}

//������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������\n");
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
	return 1;//û�ո�
}

//�ж���Ӯ
char CheckWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//���ж�
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//���ж�
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�Խ����ж�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж��Ƿ�ƽ��
	//�ж������Ƿ����� �����Ƿ��пո�
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	else
		return 'C';
}