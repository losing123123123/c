#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//7-16 ����ϸ���������������
//����������6��������A�����Ǵ�A��ʼ������4�����֡������������������ɵ����ظ����ֵ�3λ����
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