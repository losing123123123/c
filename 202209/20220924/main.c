#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//-10
	int i = -20;
	unsigned int j = 10;
	printf("%d", i + j);


	//x永远不会小于0，死循环
	unsigned int x = 10;
	for (x = 10; x >= 0; x--)
	{
		printf("%d", x);
	}
	
	//255
	int y = 0;
	char arr[1000] = { 0 };
	for (y = 0; y < 1000; y++)
	{
		arr[y] = -1 - y;
	}
	//-1 -2 ..... -127 -128 127 126 125 ..... 3 2 1 0 -1 -2 . . . -127 -128 127 126 125
	//到0时结束，128+127 = 255
	printf("%d", strlen(arr));

	return 0;
}