#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//关机程序

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在一分钟内关机，如果输入我是猪就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}