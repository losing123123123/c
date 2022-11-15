#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print_Factorial(const int N);

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */

void Print_Factorial(int N) {
    int a[3000];
    int temp, num, digit;           //temp：每一位的结果  num:进位   digit：结果的位数
    int i, j;
    a[0] = 1;
    digit = 1;                      //从第1位开始 
    if (N >= 0) {
        for (int i = 2; i <= N; i++)
        {
            num = 0;
            for (int j = 0; j < digit; j++)
            {
                temp = a[j] * i + num;
                num = temp / 10;
                a[j] = temp % 10;
            }
            while (num)
            {
                a[digit] = num % 10;
                num /= 10;
                digit++;
            }
        }

        for (i = digit - 1; i >= 0; i--) {
            printf("%d", a[i]);
        }
    }
    else printf("Invalid input");
}