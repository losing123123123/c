#define _CRT_SECURE_NO_WARNINGS
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cp = str1;

	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (s1 && s2 && (*s1 == *s2))
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
	return s2;
}