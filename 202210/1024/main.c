#define _CRT_SECURE_NO_WARNINGS

//�˽���ת��Ϊʮ����
#include <stdio.h>
#include <math.h>
long long convertOctalToDecimal(int octalNumber);
int main()
{
    int octalNumber;

    printf("����һ���˽�����: ");
    scanf("%d", &octalNumber);

    printf("�˽����� %d  ת��Ϊʮ����Ϊ %lld", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}
long long convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;

    while (octalNumber != 0)
    {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }
    i = 1;

    return decimalNumber;
}