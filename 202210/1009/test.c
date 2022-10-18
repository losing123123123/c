#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"my_string.h"

void test1()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 40);
}

void test2()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr , arr+2, 20);
}

void test3()
{
	char arr[20] = { '0' };
	memset(arr, '1', 10);
}