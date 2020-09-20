#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ���������飬��ɶ�����Ĳ���


//ʵ��reverse()  �����������Ԫ�ص����á�
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

//ʵ�ֺ���init() ��ʼ������Ϊȫ0
void init_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz ; i++)
	{
		arr[i] = 0;
	}

}


//ʵ��print()  ��ӡ�����ÿ��Ԫ��
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
	printf("���ú�:>\n");
	print_arr(arr, sz);

	init_arr(arr, sz);
	printf("��ʼ����:>\n");
	print_arr(arr, sz);

	return 0;
}
