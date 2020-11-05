#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//模仿qsort的功能实现一个通用的冒泡排序

//void qsort(void *base,
//	size_t num,
//	size_t width,
//	int(__cdecl *compare)(const void *elem1, const void *elem2));
//
//void swap_int(char* e1,char* e2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *(e1 + i);
//		*(e1 + i) = *(e2 + i);
//		*(e2 + i) = tmp;
// 	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void my_qsort(void* base, 
//	int sz, 
//	int width, 
//	int(*cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int ret = cmp((char*)base + j*width, (char*)base + (j + 1)*width);
//			if (ret > 0)
//			{
//				swap_int((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//
//		}
//	}
//	
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void test1(int* arr, int sz, int width)
//{
//	print_arr(arr, sz);
//	my_qsort(arr, sz, width, cmp_int);
//	print_arr(arr, sz);
//}


int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	test1(arr,sz,width);
	return 0;
}