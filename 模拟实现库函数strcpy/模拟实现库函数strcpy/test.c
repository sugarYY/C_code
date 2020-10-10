#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* arr2, const char* arr1)
{
	char* ret = arr2;
	assert(arr2 != NULL);
	assert(arr1 != NULL);
	while (*(arr2++) = *(arr1++))
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "hello";
	char arr2[] = "xxxxxxxx";
	printf("%s\n", my_strcpy(arr2, arr1));
	return 0;
}