#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

void print_arr(const int* arr, const int sz)
{
	assert(arr != NULL);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");

}

void odd_even(int arr[], const int sz)
{
	int i = 0;
	int j = 0;
	assert(arr != NULL);
	for (j = 0; j < sz; j++)
	{
		assert(arr[j] != 0);
	}
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	odd_even(arr,sz);
	print_arr(arr,sz);
	return 0;
}