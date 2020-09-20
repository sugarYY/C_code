#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������A�е����ݺ�����B�е����ݽ��н�����������һ����

void swap_arr(int arr1[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

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
	int arr1[] = { 1, 3, 5, 7, 9 };
	int arr2[] = { 0, 2, 4, 6, 8 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	//����ǰ
	print_arr(arr1, sz);
	print_arr(arr2, sz);

	swap_arr(arr1, arr2, sz);

	printf("������:>\n");
	print_arr(arr1, sz);
	print_arr(arr2, sz);

	return 0;
}