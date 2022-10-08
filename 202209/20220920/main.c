#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
/*
//死循环，arr[15]的值为i
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	
	for (i = 0; i <= 15; i++)
	{
		arr[i] = 0;
		printf("%d",i);
	}
	return 0;
}
*/

void my_strcpy(char* dest, char* arr)
{
	while (*arr != '\0')
	{
		*dest = *arr;
		dest++;
		arr++;
	}
	*dest = *arr;
}

void my_strcpy1(char* dest, char* arr)
{
	while (*arr != '\0')
	{
		*dest++ = *arr++;
	}
	*dest = *arr;
}

void my_strcpy2(char* dest, char* arr)
{
	while (*dest++ = *arr++)
	{

	}
}


void my_strcpy3(char* dest,const char* arr)
{
	assert(dest != NULL);
	assert(arr != NULL);
	while (*dest++ = *arr++)
	{

	}
}

char *  my_strcpy4(char* dest, const char* arr)
{
	assert(dest != NULL);
	assert(arr != NULL);
	char * ret = dest;
	while (*dest++ = *arr++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "xxxxxxxx";
	char arr2[] = "hello";
	my_strcpy2(arr1, NULL);
	printf("%s", arr1);
	return 0;
}