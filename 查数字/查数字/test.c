#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��һ�����������в��Ҿ����ĳ������n�� 
//���ܣ���v[0]<= v[1] <= v[2] <= ��. <= v[n - 1]�������в���x

int main()
{
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int left = 0;
	int right = 8;
	int num = 0;
	int i = 0;
	printf("��������Ҫ���ҵ�����->");
	scanf("%d", &num);
	while (left <= right)//left == right
	{
		i = (left + right) / 2;
		if (num < arr[i])
		{
			right = i-1;//!-1��ǰһλ
		}
		else if (num > arr[i])
		{
			left = i+1;//��+1���һλ
		}
		else
		{
			printf("arr[%d]\n", i);
			break;
		}
		if (left > right)

		{
			printf("�Ҳ���\n");
		}
	}
	return 0;
}