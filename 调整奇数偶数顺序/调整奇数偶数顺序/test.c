#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

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