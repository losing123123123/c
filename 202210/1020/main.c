#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>

// ʮ����ת��Ϊ������
long long convertDecimalToBinary(int n);

int main()
{
    int n;
    printf("����һ��ʮ������: ");
    scanf("%d", &n);
    printf("ʮ������ %d ת��Ϊ������λ %lld", n, convertDecimalToBinary(n));
    return 0;
}
long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n != 0)
    {
        remainder = n % 2;
        printf("Step %d: %d/2, ���� = %d, �� = %d\n", step++, n, remainder, n / 2);
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}