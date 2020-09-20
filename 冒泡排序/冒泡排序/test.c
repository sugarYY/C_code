#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//实现一个对整形数组的冒泡排序
//从大到小

//打印数组
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//冒泡排序
void bubble(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])//不满足前大后小
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
	int sz = sizeof(arr)/sizeof(arr[0]);//数组长度
	print_arr(arr, sz);//冒泡排序前
	bubble(arr, sz);
	print_arr(arr, sz);//冒泡排序后
}