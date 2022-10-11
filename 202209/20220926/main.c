#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int money = 0;
	scanf("%d", &money);
	int count = money;
	int vacant = money;
	while (vacant != 0 && vacant != 1)
	{
		count += vacant / 2;
		vacant = vacant - vacant / 2;
	}
	printf("%d", count);

	return 0;
}