#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

//��������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void PrintBoard(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);
//�����Ϸ��Ӯ
char CheckWin(char board[ROW][COL], int row, int col);