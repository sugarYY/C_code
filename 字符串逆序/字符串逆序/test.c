#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//дһ����������������һ���ַ��������ݡ�

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
	//scanf("%s", arr);//�����ո�Ͳ��ټ������¶���
	gets(arr);//��ȡһ�� �пո�Ҳ��
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}