#include <stdio.h>

int main()
{
	char arr[] = "Hello world !!!!";
	char arr1[] = "################";
	int left = 0;
	int i = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	int max = right;
	while (left < right-1)
	{
		arr1[left] = arr[left];
		arr1[right-2] = arr[right-2];
		left += 1;
		right -= 1;
		//printf("%s\n", arr1);
		for (i = 0; i < max - 1; i++)
		{
			printf("%c", arr1[i]);
		}
		printf("\n");	
	}
	return 0;
}