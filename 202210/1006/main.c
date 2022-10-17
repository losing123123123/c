#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"test.h"

int main()
{
	//test();

	char arr[20] = "abcdef";
	//printf("%d", my_strlen(arr));
	printf("%s", my_strcat(arr, "ghi"));
	return 0;
}

