#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ӡ1-100֮��3�ı���

int main()
{
	int i = 1;
	int ret = 1;
	while (ret<=100)
	{
		ret = i * 3;
		printf("%d ", ret);
		i++;
	}
	return 0;
}