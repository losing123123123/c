#include<stdio.h>

//√∞≈›≈≈–Ú∑®
void Arr(int arr[],int sz)
{
	int i = 0,j = 0;
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1;
		for(j = 0; j < sz-1-i; j++)
		{ 
			if ( arr[j] > arr[j+1])
			{
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}