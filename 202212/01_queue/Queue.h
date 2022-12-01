#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int DataType;
typedef struct SinList
{
	int data;
	struct SinList* next;
}SinList;

typedef struct Queue
{
	SinList* head;
	SinList* tail;
}Queue;

void Init( Queue* phead);
void QueuePush( Queue* phead, int input);
void QueuePop( Queue* phead);
void Print( Queue phead);
bool QueueEmpty( Queue* phead);
void QueueDestroy( Queue* phead);
int QueueSize(Queue phead);