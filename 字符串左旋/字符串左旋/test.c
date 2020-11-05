#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

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
	scanf("%d", &n);//����������λ
	left_move(arr, n, sz);
	printf("%s\n", arr);
	return 0;
}