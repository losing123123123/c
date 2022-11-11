#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//Ñî»ÔÈý½Ç
int main()
{
	int a[10][10] = { 0 };
	int input = 0;
	scanf("%d", &input);
	int i = 0;
	for (i = 0; i < input; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	int j = 0;

	for (i = 0; i < input; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (a[i][j] == 0)
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}

	for (i = 0; i < input; i++)
	{
		//´òÓ¡¿Õ¸ñ
		int x = input - 1 - i;
		while (x--)
		{
			printf("   ");
		}
		for (j = 0; j <=i; j++)
		{
			printf("%3d   ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}