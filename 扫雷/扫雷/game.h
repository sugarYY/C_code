#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define EASY 10
//³õÊ¼»¯ÆåÅÌ
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void PrintBoard(char board[ROWS][COLS], int row, int col);

//·ÅÀ×
void SetMine(char board[ROWS][COLS], int row, int col);

//É¨À×
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);