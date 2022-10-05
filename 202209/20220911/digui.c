#include<stdio.h>

void digui(unsigned int n)
{
	if (n > 9)
	{
		digui(n / 10);
	}
	printf("%d ", n%10);
}