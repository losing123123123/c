#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"add.h"


#define ADD(x,y)  ((x)+(y))  //∫Í∂®“Â

#define PRINT(x)  printf("the value of " #x " is %d\n",x)
#define PRINTF(x,type)  printf("the value of " #x " is "#type"\n",x)
#define A(x,y)  x##y
int main()
{
	//int a = 10;
	//int b = 20;
	//printf("%d\n", ADD(10, 20));
	//printf("%d\n", add(10, 20));


	int a = 10;
	PRINT(a);
	int b = 20;
	PRINTF(b,%d);
	float c = 5.5;
	PRINTF(c,%f);

	int helloworld = 100;
	printf("%d", A(hello, world));

	return 0;
}