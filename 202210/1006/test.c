#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void test()
{
	int arr[100][100] = { 0 };
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	int j = 0;
	int x = 1;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a - i; j++)
		{
			arr[i][j] = x;
			x++;
		}
	}

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a - i; j++)
		{
			printf("%d   ", arr[j][i]);
		}
		printf("\n");
	}
}