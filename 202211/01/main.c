#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


/**
 * ��ת����
 * @param n int���� ���鳤��
 * @param m int���� ���ƾ���
 * @param a int����һά���� ��������
 * @param aLen int a���鳤��
 * @return int����һά����
 * @return int* returnSize ������������
 */

void Exchange(int* s, int left, int right)
{

    while (left < right)
    {
        int temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}
int* solve(int n, int m, int* a, int aLen) {
    // write code here
    while (m > 6)
        m -= 6;
    int left = 0;
    int right = aLen - 1;
    Exchange(a, left, right);
    left = 0;
    right = m - 1;
    Exchange(a, left, right);
    left = m;
    right = aLen - 1;
    Exchange(a, left, right);
    return a;
}
int main()
{

    int a[] = { 1,2,3,4,5,6 };
    solve(6, 7, a, 6); 
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
	return 0;
}