#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ʵ��һ�������������ð������
//�Ӵ�С

//��ӡ����
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//ð������
void bubble(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])//������ǰ���С
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int sz = sizeof(arr)/sizeof(arr[0]);//���鳤��
	print_arr(arr, sz);//ð������ǰ
	bubble(arr, sz);
	print_arr(arr, sz);//ð�������
}