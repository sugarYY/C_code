#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求10个整数中最大值

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	for (i = 1; i <= 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);

	return 0;
}



//写一个函数交换 
//void swap(int* x, int* y)
//{
//	if (*x > *y)
//	{
//		int temp = *x;
//		*x = *y;
//		*y = temp;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	int arr[10] = {9,8,7,6,5,4,3,2,1,11 };
//	for (i = 0; i <= 8; i++)
//	{
//		swap(&arr[i],&arr[i+1]);
//	}
//	printf("%d\n", arr[9]);
//	return 0;
//}