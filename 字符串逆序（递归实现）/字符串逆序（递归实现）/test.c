#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��дһ������ reverse_string(char * string)
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

//���ַ�������
int my_strlen(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//�ݹ�ʵ��
void reverse_string(char* str)
{
	char temp = str[0];
	int len = my_strlen(str);
	str[0] = str[len - 1];
	str[len - 1] = '\0';//ĩβ��1��������ַ��������Լ��û�����λ
	if (my_strlen(str)>1)
	{
		reverse_string(str + 1);
	}
	str[len - 1] = temp;//��ĩβ�û�
}

//�ǵݹ�ʵ��
void reverse_string(char* str)
{
	int left = 0;
	int right = my_strlen(str) - 1;
	while (left < right)
	{
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "hellobit";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
