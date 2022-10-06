#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"arr.h"

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Arr(arr, sz);
	return 0;
}