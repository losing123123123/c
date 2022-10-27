#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void text1()
{
	//C �⺯�� void *malloc(size_t size) ����������ڴ�ռ䣬������һ��ָ������ָ�롣
	//size -- �ڴ��Ĵ�С�����ֽ�Ϊ��λ��
	//�ú�������һ��ָ�� ��ָ���ѷ����С���ڴ档�������ʧ�ܣ��򷵻� NULL��

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
	//C �⺯�� void *calloc(size_t nitems, size_t size) ����������ڴ�ռ䣬������һ��ָ������ָ�롣
	//malloc �� calloc ֮��Ĳ�ͬ���ǣ�malloc ���������ڴ�Ϊ�㣬�� calloc �����÷�����ڴ�Ϊ�㡣
	//nitems -- Ҫ�������Ԫ�ظ�����    size -- Ԫ�صĴ�С��
	//�ú�������һ��ָ�룬ָ���ѷ�����ڴ档�������ʧ�ܣ��򷵻� NULL��

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
	//C �⺯�� void *realloc(void *ptr, size_t size) �������µ���֮ǰ���� 
	//malloc �� calloc ������� ptr ��ָ����ڴ��Ĵ�С��
	//ptr -- ָ��ָ��һ��Ҫ���·����ڴ���ڴ�飬���ڴ��֮ǰ��ͨ������ malloc��calloc �� realloc ���з����ڴ�ġ�
	//���Ϊ��ָ�룬������һ���µ��ڴ�飬�Һ�������һ��ָ������ָ�롣
	//size -- �ڴ����µĴ�С�����ֽ�Ϊ��λ�������СΪ 0���� ptr ָ��һ���Ѵ��ڵ��ڴ�飬�� ptr ��ָ����ڴ��ᱻ�ͷţ�������һ����ָ�롣

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