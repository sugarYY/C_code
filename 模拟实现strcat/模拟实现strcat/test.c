#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//ģ��ʵ��strcat
char* my_strcat(char* dest, const char* src)
{   
	char* ret = dest;
	assert(dest);
	assert(src);
	//�ҵ�destĩβ
	while (*dest != '\0')
	{
		dest++;
	}

	//׷���ַ���
	while (*dest = *src)
	{
		dest++;
		src++;
	}
	return ret;
	

}

int main()
{
	char str1[20] = "hello";
	char str2[] = " world";
	printf("%s\n",my_strcat(str1, str2));
	return 0;
}