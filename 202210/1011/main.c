#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char a[] = "abcdef";
	char b[] = { 'a','b','c','d','e','f' };
	printf("%d\t%d\n", sizeof(a), sizeof(b));
	printf("%d\t%d\n", strlen(a), strlen(b));

	int arr[] = { 1,2,3,4,5,6 };
	printf("%d\n", sizeof(arr));
	return 0; 
}