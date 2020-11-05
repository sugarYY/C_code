#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

void left_move(char arr[], int n, int sz)
{
	assert(n <= sz);
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		int tmp = arr[0];
		for (j = 0; j < sz - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[sz - 1] = tmp;
	}
}

int main()
{
	char arr[] = "ABCD";
	int n = 0;
	int sz = strlen(arr);
	scanf("%d", &n);//输入左旋几位
	left_move(arr, n, sz);
	printf("%s\n", arr);
	return 0;
}