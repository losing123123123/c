#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//递归写出n的阶乘

int A(int n)
{
	
	if (n == 1)
	{
		return 1;
	}
	else
		return n * A(n - 1);
}


//利用递归反向打印字符串
void B(char* p)
{
	if (*(p + 1) != '\0')
	{
		B(p + 1);
		printf("%c", *p);
	}
	else
		printf("%c", *p);
}

//有5个人，第一个人10岁，后面每个人比前一个人大2岁，求第五个人多少岁
int C(int n)
{
	if (n == 1)
	{
		return 10;
	}
	else
		return C(n - 1) + 2;
}


int main()
{
	//printf("%d", A(5));

	//B("abcdef");
	printf("%d", C(5));
	return 0;
}