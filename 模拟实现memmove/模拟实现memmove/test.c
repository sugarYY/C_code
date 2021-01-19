#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//模拟实现memmove
void* my_memmove(void* dest, void* src, unsigned int count)
{
	void* ret = dest;
	assert(dest);
	assert(src);
	//dest在src前 从前向后拷贝
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}

	//dest在src后 从后向前拷贝
	if (dest > src)
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(arr + 4, arr, 16);
	return 0;
}