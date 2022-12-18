#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//7-16 求符合给定条件的整数集
//给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。
int main()
{
    int i = 0;
    int x, y, z;
    int k = 1;
    scanf("%d", &i);
    for (x = i; x < i + 4; x++)
    {
        for (y = i; y < i + 4; y++)
        {
            for (z = i; z < i + 4; z++)
            {
                if (x != y && y != z && x != z)
                {
                    if (k == 6)
                    {
                        printf("%d\n", x * 100 + y * 10 + z);
                        k = 1;
                    }
                    else
                    {
                        printf("%d ", x * 100 + y * 10 + z);
                        k++;
                    }

                }
            }
        }
    }
    return 0;
}