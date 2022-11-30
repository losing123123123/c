#define _CRT_SECURE_NO_WARNINGS
#include"List.h"

List* Init()
{
	List* head = (List*)malloc(sizeof(List));
	head->next = head;
	head->prev = head;

	return head;
}

void PrintList(List* phead)
{
	List* temp = phead->next;
	while (temp != phead)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void SListpushBack(List* phead, ListType input)
{
	assert(phead);
	List* new = (List*)malloc(sizeof(List));
	new->data = input;
	new->next = phead;
	new->prev = phead->prev;

	phead->prev->next = new;
	phead->prev = new;
}

void SListpopBack(List* phead)
{
	assert(phead);
	assert(phead->next != phead);
	
	
	List* temp = phead->prev;
	temp->prev->next = phead;
	phead->prev = temp->prev;
	free(temp);
}

void SListpushFront(List* phead, ListType input)
{
	assert(phead);
	List* new = (List*)malloc(sizeof(List));
	new->data = input;
	new->next = phead->next;
	phead->next = new;
	new->prev = phead;
	new->next->prev = new;
}

void SListpopFront(List* phead)
{
	assert(phead);
	assert(phead->next != phead);
	List* temp = phead->next;
	temp->next->prev = phead;
	phead->next = temp->next;

	free(temp);
}

List* Find(List* phead, ListType input)
{
	List* temp = phead->next;
	while (temp != phead)
	{
		if (temp->data == input)
		{
			return temp;
		}
		temp = temp->next;
	}
	return NULL;
}


void AfterInsert(List* cur, ListType input)
{
	assert(cur);
	List* new = (List*)malloc(sizeof(List));
	new->data = input;
	new->next = cur->next;
	new->prev = cur;
	cur->next = new;
	new->next->prev = new;
}

void FrontInsert(List* cur, ListType input)
{
	assert(cur);
	List* new = (List*)malloc(sizeof(List));
	new->data = input;
	new->next = cur;
	new->prev = cur->prev;
	cur->prev->next = new;
	cur->prev = new;
}
