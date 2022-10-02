#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*1!+2!+3!+.......+10!*/
int main()
{
	int i = 0 , j = 0;
	int num = 1;
	int num1 = 0;
	/*for (j = 0; j < 3; j++)
	{
		for (i = 1; i <= j+1; i++)
		{
			num = num * i;
		}
		num1 += num;
		num = 1;
	}
	*/
	
		for (i = 1; i <= 3; i++)
		{
			num = num * i;
			num1 += num;
		}
	
	printf("%d", num1);
	return 0;
}