#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//给一个数组和val，删除掉数组里和val一样的值，并返回删除后数组元素的个数 - 空间复杂度O(1) 时间复杂度O(n)

int removeElement(int * nums , int val ,int numsSize)
{
	int src = 0;
	int dest = 0;
	while (src < numsSize)
	{
		if (nums[src] == val)
		{
			src++;
		}
		else
		{
			nums[dest] = nums[src];
			dest++;
			src++;
		}
	}
	return dest;
}
int main()
{
	int arr[] = { 1,2,3,3,4,3,3,5,3 };
	printf("%d", removeElement(arr,3,9));

	return 0;
}