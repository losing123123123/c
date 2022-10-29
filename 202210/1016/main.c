#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//7个分数，去掉最高分和最低分，计算平均分
int main()
{
	int sum = 0;
	int max = 0;
	int min = 100;
	int num = 0;
	int i = 0;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &num);
		sum += num;
		if (num > max)
		{
			max = num;
		}
		if (num < min)
		{
			min = num;
		}
	}
	printf("%.2f", (sum - max - min) / 5.0);
	return 0;
}