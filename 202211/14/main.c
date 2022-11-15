#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int IsTheNumber(const int N);

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for (i = n1; i <= n2; i++) {
        if (IsTheNumber(i))
            printf("%d\n",i);
    }
    printf("cnt = %d\n", cnt);
   // printf("%d", isSqrt(17));

    return 0;
}

/* 你的代码将被嵌在这里 */

int  isSqrt(int  n)
{
    for (int i = 1; n > 0; i += 2)
        n -= i;
    return   0 == n;
}

int IsTheNumber(const int N)
{
    int M = N;
    if (isSqrt(M))
    {
        int arr[10] = { 0 };
        while ( M )
        {
            int x = M % 10;
            if (arr[x] == 1)
                return 1;
            else
            {
                arr[x] = 1;
                M = M / 10;
            }
        }
    }
    return 0;
}