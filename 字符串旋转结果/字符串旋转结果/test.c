#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

int str_cmp(char arr1[],char arr2[],int sz)
{
	//��ת�ַ���
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
		//�ж��Ƿ����
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
		printf("arr1��arr2��ת��õ���\n");
	}
	else
	{
		printf("arr1����arr2��ת��õ���\n");
	}
	return 0;
}