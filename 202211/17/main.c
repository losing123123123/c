#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����һ�����飬ȥ���ظ���Ԫ�أ�����ȥ��������ĳ���  -  �ռ临�Ӷ�O(1)

int removeDuplicates(int* nums, int numsSize)
{
	int dest = 0;
	int i = 0;
	int j = 0;
	while ( j < numsSize )
	{
		if (nums[i] == nums[j])
		{
			j++;
		}
		else
		{
			nums[dest] = nums[i];
			dest++;
			i = j;
		}
	}
	nums[dest] = nums[i];
	dest++;
	return dest;
}

int main()
{
	int a[] = { 1,1,1,2,3,3,4,5,5,5 ,6};
	printf("%d", removeDuplicates(a, 11));

	return 0;
}