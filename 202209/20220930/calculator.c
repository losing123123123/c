#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int add(int x,int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}

void calculator()
{
	int (*pf[5])(int, int) = { NULL,add,sub,mul,div };
	int input = 0;
	int x = 0, y = 0;
	printf("**********************\n");
	printf("******  0.exit  ******\n");
	printf("******  1.add   ******\n");
	printf("******  2.sub   *****\n");
	printf("******  3.mul   *****\n");
	printf("******  4.div   *****\n");
	printf("*********************\n");
	printf("请选择:>");
	scanf("%d", &input);
	if(input>0&&input<5)
	{ 
		printf("请输入两个数>");
		scanf("%d %d", &x, &y);
		printf("%d", pf[input](x, y));
	}
	else if (input == 0)
	{
		
	}
	else
	{
		printf("选择有误，重新选择！\n");
		calculator();
	}
}