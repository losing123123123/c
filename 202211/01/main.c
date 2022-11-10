#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


/**
 * 旋转数组
 * @param n int整型 数组长度
 * @param m int整型 右移距离
 * @param a int整型一维数组 给定数组
 * @param aLen int a数组长度
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
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