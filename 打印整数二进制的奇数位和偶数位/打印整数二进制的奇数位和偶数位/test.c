#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ

int main()
{
	int num = 20;//00000000 00000000 00000000 0001 0100
	int i = 31;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

}

//������

////��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//
//int* odd_digit(int x,int arr[])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 32; i += 2)
//	{
//		if (((x >> i) & 1 )== 1)
//		{
//			arr[j] = 1;
//			j++;
//		}
//		if (((x >> i) & 1) == 0)
//		{
//			arr[j] = 0;
//			j++;
//		}
//	}
//	return arr;
//}
//
//int* even_digit(int x,int arr[])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 32; i += 2)
//	{
//		if (((x >> i) & 1) == 1)
//		{
//			arr[j] = 1;
//			j++;
//		}
//		if (((x >> i) & 1) == 0)
//		{
//			arr[j] = 0;
//			j++;
//		}
//	}
//	return arr;
//}
//
//void print_arr(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n = 20;//0000 0000 0000 0000 0000 0000 0001 0100
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	odd_digit(n,arr1);//����λ
//	print_arr(arr1,16);
//	even_digit(n,arr2);//ż��λ
//	print_arr(arr2,16);
//
//	return 0;
//}