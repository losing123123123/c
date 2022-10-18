#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		(char*)dest += 1;
		(char*)src += 1;

	}
	return ret;
}