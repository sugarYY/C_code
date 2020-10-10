#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

int my_strlen(const char* arr)
{
	assert(arr != NULL);
	int count = 0;
	while (*(arr++))
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "hellobit";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}