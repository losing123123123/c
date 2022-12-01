#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

void Init(Queue* phead)
{
	assert(phead);
	phead->head = NULL;
	phead->tail = NULL;
}

void QueuePush(Queue* phead, int input)
{
	assert(phead);
	SinList * temp = (SinList*)malloc(sizeof(SinList));
	if (temp == NULL)
	{
		exit(-1);
	}
	temp->data = input;
	temp->next = NULL;

	if (phead->head == NULL)
		phead->head = phead->tail = temp;
	else
	{ 
		phead->tail->next = temp;
		phead->tail = temp;
	}
	
	
}

void QueuePop(Queue* phead)
{
	assert(phead);
	assert(!QueueEmpty(phead));
	SinList* temp = phead->head->next;
	free(phead->head);
	phead->head = temp;
	if (phead->head == NULL)
		phead->tail = NULL;
}


void Print(Queue phead)
{
	while (phead.head)
	{
		printf("%d ", phead.head->data);
		phead.head = phead.head->next;
	}
}


bool QueueEmpty(Queue* phead)
{
	assert(phead);
	return phead->head == NULL;
}


void QueueDestroy( Queue* phead)
{
	assert(phead);
	while (phead->head)
	{
		SinList* temp = phead->head->next;
		free(phead->head);
		phead->head = temp;
	}
	phead->tail = NULL;
}

int QueueSize(Queue phead)
{
	int count = 0;
	while (phead.head)
	{
		count++;
		phead.head = phead.head->next;
	}
	return count;
}