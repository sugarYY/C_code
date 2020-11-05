#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 3
#define M 3


//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。

int main()
{
	int arr[N][M] = { { 0, 1, 2 }, { 1, 2, 3 }, { 2, 3, 4 } };
	int num = 0;
	int i = N/2;
	int j = M/2;
	scanf("%d", &num);
	while (arr[i][j] < num && i <= N-1)//大于向下搜
	{
		i++;
	}
	while (arr[i][j] < num && j <= M-1)//大于向右搜
	{
		j++;
	}
	while (arr[i][j] > num && i >= 0)//小于向上搜
	{
		i--;
	}
	while (arr[i][j] > num && j >= 0)//小于向下搜
	{
		j--;
	}
	if (arr[i][j] == num)
	{
		printf("存在arr[%d][%d]\n", i, j);
	}
	else
	{
		printf("存在arr[%d][%d]\n", i, j);
	}
	return 0;
}