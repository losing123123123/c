#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//输入年月，输出那个月份有多少天
int main()
{
	int y = 0;
	int m = 0;
	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	while (scanf("%d %d", &y, &m) != EOF)
	{
		int day = days[m];
		if (m == 2)
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
				day += 1;
		printf("%d", day);
	}
	
	return 0;
}