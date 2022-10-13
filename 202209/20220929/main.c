#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(int x, int y)
{
	return x + y;
}
int main()
{
	int (*pf)(int, int) = add;

	printf("%d\n", add(3, 5));

	printf("%d\n", pf(3, 5));

	printf("%d\n", (*pf)(3, 5));

	return 0;
}