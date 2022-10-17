#define _CRT_SECURE_NO_WARNINGS
#include<assert.h>

int my_strlen(const char *p)
{
	assert(p);
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}