#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//在一个有序数组中查找具体的某个数字n。 
//功能：在v[0]<= v[1] <= v[2] <= …. <= v[n - 1]的数组中查找x

int main()
{
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int left = 0;
	int right = 8;
	int num = 0;
	int i = 0;
	printf("请输入你要查找的数字->");
	scanf("%d", &num);
	while (left <= right)//left == right
	{
		i = (left + right) / 2;
		if (num < arr[i])
		{
			right = i-1;//!-1向前一位
		}
		else if (num > arr[i])
		{
			left = i+1;//！+1向后一位
		}
		else
		{
			printf("arr[%d]\n", i);
			break;
		}
		if (left > right)

		{
			printf("找不到\n");
		}
	}
	return 0;
}