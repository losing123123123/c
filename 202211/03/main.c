#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//兔子生崽问题
int main()
{
	int i = 0;
	int sum = 0;
	int num = 0;
	int temp = 0;
	for (i = 1; i <= 40; i++)
	{
		if (i == 1 || i == 2)
		{
			sum = 1;
		}
		else if (i == 3)
		{
			num = 1;
			sum = sum + num;
			temp = sum;

		}
		else
		{
			temp = sum;
			sum += num;
			num = temp;
			
		}
		printf("第%d个月的兔子总数为：%d对\n", i,sum);
	}
	return 0;
}