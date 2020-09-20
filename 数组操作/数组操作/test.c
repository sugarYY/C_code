#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//创建一个整形数组，完成对数组的操作


//实现reverse()  函数完成数组元素的逆置。
void reverse_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

//实现函数init() 初始化数组为全0
void init_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz ; i++)
	{
		arr[i] = 0;
	}

}


//实现print()  打印数组的每个元素
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);

	reverse_arr(arr, sz);
	printf("逆置后:>\n");
	print_arr(arr, sz);

	init_arr(arr, sz);
	printf("初始化后:>\n");
	print_arr(arr, sz);

	return 0;
}
