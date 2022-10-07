#define _CRT_SECURE_NO_WARNINGS

#include"test.h"

//指针的类型决定了走一步的距离	
void test1()
{
	int arr[10] = { 0 };

	int* pa = arr;

	for (int i = 0; i < 10; i++)
	{
		*(pa + i) = 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test2()
{
	int arr[10] = { 0 };

	char* pa = arr;

	for (int i = 0; i < 10; i++)
	{
		*(pa + i) = 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


void test3()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int* pa = arr;
	printf("%d\n", arr[2]);
	printf("%d\n", 2[arr]);
	printf("%d\n", 2[pa]);
	printf("%d\n", pa[2]);
	printf("%d\n", *(arr+2));
	printf("%d\n", *(pa+2));
}