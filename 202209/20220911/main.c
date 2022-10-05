#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"digui.h"
#include"my_strlen.h"
#include"hannuota.h"
#include"01.h"

int main()
{
	int n = 0;
	scanf("%d", &n);

	//digui(1234);
	//printf("%d",printf("%d",printf("%d",43)));
	//char arr[] = "abcd";
	//printf("%d", my_strlen(arr));	
	//hannuota(n, 'A', 'B', 'C');

	//ÇàÍÜÌøÌ¨½×
	printf("%d\n",jump3(n));
	printf("%d\n",jump4(n));
	printf("%d\n",jump5(n));
	return 0;
}