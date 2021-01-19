#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//Ä£ÄâÊµÏÖmemcpy
void* my_memcpy(void* dest, void* src, unsigned int count)
{
	void* ret = dest;
	assert(dest);
	assert(src);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;

}


int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1, 2, 3, 4 };
	my_memcpy(arr1, arr2, sizeof(arr2));
	return 0;
}