#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣

void print_arr(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	print_arr(arr,sz);
	return 0;
}