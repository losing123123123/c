#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct stu
{
	char name[20];
	int age;
};

int compare_int(void* e1, void* e2)
{
	return (int*)e1 - (int*)e2;
}
int compare_struct(void* e1, void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}



void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(int);

	qsort(arr, sz, width, compare_int);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()
{
	struct stu s[3] = { {"zhangsan", 30} , {"lisi", 35} , {"wangwu", 25} };
	int sz = sizeof(s) / sizeof(s[0]);
	int width = sizeof(struct stu);

	qsort(s, sz, width, compare_struct);
}


void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(int);

	BubbleSorting(arr, sz, width, compare_int);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test4()
{
	struct stu s[3] = { {"zhangsan", 30} , {"lisi", 35} , {"wangwu", 25} };
	int sz = sizeof(s) / sizeof(s[0]);
	int width = sizeof(struct stu);

	BubbleSorting(s, sz, width, compare_struct);
}
