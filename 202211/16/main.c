#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//归并两个按顺序排的数组
//输入a1[1,3,5,0,0,0]
//   a2[2,4,6]
//输出a1[1,2,3,4,5,6]

void merge(int *nums1, int  m, int *nums2, int n)
{
	int end1 = m - 1;
	int end2 = n - 1;
	int end = m + n-1;
	while (end1 >= 0 || end2 >= 0)
	{
		if (nums1[end1] > nums2[end2])
		{
			nums1[end] = nums1[end1];
			end1--;
			end--;
		}
		else
		{
			nums1[end] = nums2[end2];
			end2--;
			end--;
		}
	}
	if (end1 < 0)
	{
		while (end2 >= 0)
		{
			nums1[end] = nums2[end2];
			end--;
			end2--;
		}
	}
}
int main()
{
	int nums1[] = { 1,3,5,0,0,0 };
	int nums2[] = { 2,4,6 };
	merge(nums1, 3, nums2, 3);

	return  0;
}