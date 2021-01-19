#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//Ä£ÄâÊµÏÖstrstr
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* cp = str1;
	if (*s2 == '\0')
	{
		return (char*)str1;
	}

	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return '\0';
	
}


int main()
{
	char str1[] = "abcde";
	char str2[] = "cde";
	printf("%s\n", my_strstr(str1, str2));
	return 0;
}