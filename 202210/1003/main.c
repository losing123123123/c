#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Find(int p[3][3], int* cow, int* col, int n)
{
	int x = 0;
	int y = *col-1;
	while (x <= (*cow-1) && y >= 0)
	{
		if (p[x][y] == n)
		{
			*cow = x;
			*col = y;
			return 1;
		}
		else if (p[x][y] > n)
		{
			y--;
		}
		else
		{
			x++;
		}
	}
	return 0;
}

int main()
{
	int  arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int cow = 3;
	int col = 3;
	int* x = &cow;
	int* y = &col;

	if (Find(arr, x, y, 7))
	{
		printf("找到了，坐标为：%d %d", *x, *y);
	}
	else
		printf("找不到");
	


	return 0;
}