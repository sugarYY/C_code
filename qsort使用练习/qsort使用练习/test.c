#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct Stu
{
	char name[20];
	int age;
};

int cmp_by_name(const void *e1, const void *e2)
{
	return strcmp((*(struct Stu*)e1).name, (*(struct Stu*)e2).name);
}

int cmp_by_age(const void* e1, const void* e2)
{
	return ((*(struct Stu*)e1).age - (*(struct Stu*)e2).age);
}

void test2()
{
	struct Stu s1[] = { { "zhangsan", 10 }, { "lisi", 5 }, { "wangwu", 3 } };
	int sz = sizeof(s1) / sizeof(s1[0]);
	int width = sizeof(s1[0]);
	qsort(s1, sz, width, cmp_by_name);
	qsort(s1, sz, width, cmp_by_age);

}

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
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

void test1()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	qsort(arr, sz, width, cmp_int);
	print_arr(arr,sz);
}

int main()
{
	test1();
	test2();
	return 0;
}