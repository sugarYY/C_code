#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 7

//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//……

int main()
{
	int arr[N][N];
	int i = 0;
	int j = 0;

	for (i = 0; i < N; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}

	for (i = 2; i < N; i++)
	{
		for (j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}