#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//��һ�������val��ɾ�����������valһ����ֵ��������ɾ��������Ԫ�صĸ��� - �ռ临�Ӷ�O(1) ʱ�临�Ӷ�O(n)

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