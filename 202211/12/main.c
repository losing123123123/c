#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Count_Digit(const int N, const int D);

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    printf("%d\n", N%10);
    return 0;
}

/* 你的代码将被嵌在这里 */
int Count_Digit(const int N, const int D)
{
    int M = N;
    int count = 0;
    while (M)
    {
        if (M % 10 == D || M % 10 == -D)
            count++;
        M = M / 10;
    }
    return count;
}