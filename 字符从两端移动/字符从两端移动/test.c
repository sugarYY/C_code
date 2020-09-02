#define _CRT_SECURE_NO_WARNINGS 1

//编写代码，演示多个字符从两端移动，向中间汇聚
//!!!i adore u!!!
//!             !
//!!           !！
//!!!         !!！
//!!!i       u!!!
//!!!i       u!!!
//!!!i a   e u!!!
//!!!i ad re u!!!
//!!!i adore u!!!
#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	char arr1[] = "!!!i adore u!!!";
	char arr2[] = "               ";
	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//睡眠一秒 大写S
		system("cls");//清屏
		left++;
		right--;
	}
	printf("!!!i adore u!!!\n");

	return 0;
}