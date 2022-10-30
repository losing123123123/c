#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//顺序插入一个数字
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int arr[20] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int m = 0;
	scanf("%d", &m);
	for (i = n - 1; i >= 0; i--)
	{
		if (arr[i] > m)
		{
			arr[i + 1] = arr[i];
		}
		else
		{
			break;
		}
	}

	arr[i + 1] = m;

	for (i = 0; i < n+1; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}