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
	SinList* temp = (SinList*)malloc(sizeof(SinList));
	if (temp == NULL)
	{
		exit(-1);
	}
	temp->data = input;
	temp->next = NULL;

	if (phead->head == NULL)
		phead->head = temp;

	phead->tail = temp;

}
void QueuePop(Queue* phead);
void Print(Queue phead)
{
	while (phead.head->next)
	{
		printf("%d ", phead.head->data);
		phead.head = phead.head->next;
	}
}
void QueueEmpty(Queue phead);
void QueueDestroy(Queue* phead)
{
	assert(phead);
	free(phead->head);
	phead->head = NULL;
}