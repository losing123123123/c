#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//7-15 ¼ÆËãÔ²ÖÜÂÊ

int main()
{
    double input = 0;
    double sum = 1;
    int i = 1;
    double j = 1.0;
    scanf("%lf", &input);
    while (j >= input)
    {
        j = j * i / (2 * i + 1);
        sum += j;
        i++;
    }
    printf("%lf", sum * 2);
    return 0;
}