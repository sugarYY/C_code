#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////�ݹ�ʵ��strlen
//
//int my_strlen(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1 + my_strlen(p+1);
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hellobit";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}





//�ǵݹ�ʵ��strlen

int my_strlen1(char* p)
{
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}

int main()
{
	char arr[] = "hellobit";
	int ret1 = my_strlen1(arr);
	printf("%d\n", ret1);
	return 0;
}
