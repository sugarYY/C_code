#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 3
#define M 3


//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�

int main()
{
	int arr[N][M] = { { 0, 1, 2 }, { 1, 2, 3 }, { 2, 3, 4 } };
	int num = 0;
	int i = N/2;
	int j = M/2;
	scanf("%d", &num);
	while (arr[i][j] < num && i <= N-1)//����������
	{
		i++;
	}
	while (arr[i][j] < num && j <= M-1)//����������
	{
		j++;
	}
	while (arr[i][j] > num && i >= 0)//С��������
	{
		i--;
	}
	while (arr[i][j] > num && j >= 0)//С��������
	{
		j--;
	}
	if (arr[i][j] == num)
	{
		printf("����arr[%d][%d]\n", i, j);
	}
	else
	{
		printf("����arr[%d][%d]\n", i, j);
	}
	return 0;
}