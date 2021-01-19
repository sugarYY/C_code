#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//Ä£ÄâÊµÏÖstrcmp
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 == *str2)
	{
		if (str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return *str1 - *str2;
}



int main()
{
	char str1[] = "abce";
	char str2[] = "abcd";
	printf("%d\n",my_strcmp(str1, str2));
	return 0;
}