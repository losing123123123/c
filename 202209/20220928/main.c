#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int* pa = arr;
	int* pb = &arr;
	int (*pd)[9] = arr;

	printf("%d\n", *(pa+1));
	printf("%d\n", *(pb+1));
	printf("%d\n", (*pd)[3]);

	int a = 10;
	int b = 20;
	int c = 30;
	int* pe = &a;
	int* pf = &b;
	int* pg = &c;
	int* p1[3] = { &a,pf,pg };
	printf("%d\n", **(p1));



	return 0;
}