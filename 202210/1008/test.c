#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"my_string.h"
#include<string.h>

void test1()
{
	char arr1[] = "abcdddef";
	char arr2[] = "dde";
	char* ret = my_strstr(arr1, arr2);
	printf("%s\n", ret);
}

void test2()
{
	char arr[] = "740379197@qq.com";
	char tmp[20];
	strcpy(tmp, arr);
	char* ret;
	for (ret = strtok(tmp, "@."); ret != NULL; ret = strtok(NULL, "@."))
	{
		printf("%s\n", ret);
	}
}