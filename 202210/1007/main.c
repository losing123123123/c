#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcde";
	int ret = my_strcmp(arr1, arr2);
	if (ret > 0)
	{
		printf("arr1 > arr2");
	}
	else if (ret < 0)
	{
		printf("arr1 < arr2");
	}
	else
	{
		printf("arr1 = arr2");
	}

	return 0;
}