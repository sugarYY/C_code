#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

void print(int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d ", x % 10);

}

int main()
{
	int a = 1234;
	print(a);
	return 0;
}