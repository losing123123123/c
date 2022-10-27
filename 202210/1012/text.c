#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void text1()
{
	//C 库函数 void *malloc(size_t size) 分配所需的内存空间，并返回一个指向它的指针。
	//size -- 内存块的大小，以字节为单位。
	//该函数返回一个指针 ，指向已分配大小的内存。如果请求失败，则返回 NULL。

	int* ret = (int*)malloc(40);
	if (ret == NULL)
	{
		perror("text1");
		return;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(ret + i) = i;
			printf("%d\n", *(ret + i));
		}
	}
	free(ret);
	ret = NULL;

}

void text2()
{
	//C 库函数 void *calloc(size_t nitems, size_t size) 分配所需的内存空间，并返回一个指向它的指针。
	//malloc 和 calloc 之间的不同点是，malloc 不会设置内存为零，而 calloc 会设置分配的内存为零。
	//nitems -- 要被分配的元素个数。    size -- 元素的大小。
	//该函数返回一个指针，指向已分配的内存。如果请求失败，则返回 NULL。

	int* ret = (int*)calloc(10,4);
	if (ret == NULL)
	{
		perror("text2");
		return;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(ret + i) = i;
			printf("%d\n", *(ret + i));
		}
	}
	free(ret);
	ret = NULL;
}

void text3()
{
	//C 库函数 void *realloc(void *ptr, size_t size) 尝试重新调整之前调用 
	//malloc 或 calloc 所分配的 ptr 所指向的内存块的大小。
	//ptr -- 指针指向一个要重新分配内存的内存块，该内存块之前是通过调用 malloc、calloc 或 realloc 进行分配内存的。
	//如果为空指针，则会分配一个新的内存块，且函数返回一个指向它的指针。
	//size -- 内存块的新的大小，以字节为单位。如果大小为 0，且 ptr 指向一个已存在的内存块，则 ptr 所指向的内存块会被释放，并返回一个空指针。

	int* r = (int*)calloc(10, 4);
	if (r == NULL)
	{
		perror("text2");
		return;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(r + i) = i;
			printf("%d\n", *(r + i));
		}
	}
	int * p = (int*)realloc(r, 80);
	if (p == NULL)
	{
		perror("text3");
		return ;
	}
	else
	{
		int i = 0;
		for (i = 10; i < 20; i++)
		{
			*(p + i) = i;
			printf("%d\n", *(p + i));
		}
	}
	free(p);
	p = NULL;
}