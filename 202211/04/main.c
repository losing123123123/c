#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//兔子生崽问题
int main()
{

	int i = 0;
	int a = 1;
	int b = 1;
	for (i = 1; i <= 40; i+=2)
	{
		if (i == 1)
		{
			
		}
		else
		{
			a = a + b;
			b = a + b;
		}
		printf("第%d个月的兔子总数为：%d对\n", i, a);
		printf("第%d个月的兔子总数为：%d对\n", i+1, b);
	}
	


	return 0;
}