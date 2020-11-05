#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

int str_cmp(char arr1[],char arr2[],int sz)
{
	//旋转字符串
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		char tmp = arr1[j];
		for (j = 0; j < sz-1; j++)
		{
			arr1[j] = arr1[j + 1];
		}
		arr1[sz-1] = tmp;
		//判断是否相等
		if (strcmp(arr1, arr2) == 0)
		{
			return 1;
		}
	}
	return 0;

}


int main()
{
	char arr1[] = "abcd";
	char arr2[] = "ABCD";

	int sz = strlen(arr1);
	if (str_cmp(arr1, arr2, sz) == 1)
	{
		printf("arr1是arr2旋转后得到的\n");
	}
	else
	{
		printf("arr1不是arr2旋转后得到的\n");
	}
	return 0;
}