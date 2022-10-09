#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void exchange(char* start, char* end)
{
	while ( start < end )
	{
		char temp = 0;
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}

}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr) ;
	exchange(arr, arr+len-1);

	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		exchange(start, end-1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}

	printf("%s", arr);
	return 0;
}