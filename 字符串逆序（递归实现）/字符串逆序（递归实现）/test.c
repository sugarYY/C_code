#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//编写一个函数 reverse_string(char * string)
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。

//求字符串长度
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

//递归实现
void reverse_string(char* str)
{
	char temp = str[0];
	int len = my_strlen(str);
	str[0] = str[len - 1];
	str[len - 1] = '\0';//末尾置1方便计算字符串长度以及置换其他位
	if (my_strlen(str)>1)
	{
		reverse_string(str + 1);
	}
	str[len - 1] = temp;//将末尾置换
}

//非递归实现
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
