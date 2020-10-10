#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//写一个函数，可以逆序一个字符串的内容。

void reverse(char* arr)
{
	int len = strlen(arr);
	char* left = arr;
	char* right = arr + len - 1;

	while(left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
	
}

int main()
{
	char arr[100] = { 0 };
	//scanf("%s", arr);//遇到空格就不再继续往下读了
	gets(arr);//读取一行 有空格也读
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}