#define _CRT_SECURE_NO_WARNINGS

#include"SinList.h"

SL* SListmalloc(ListType input)
{
	SL* new = (SL*)malloc(sizeof(SL));
	if (new == NULL)
	{
		exit(-1);
	}
	
}

void SListpushBack(SL** pphead, ListType input)
{
	SL* new = SListmalloc(input);
	new->data = input;
	new->next = NULL;
	 if (*pphead == NULL)
	 {
		 *pphead = new;
	 }
	 else
	 {
		 SL* temp = *pphead;
		 while (temp->next != NULL)
		 {
			 temp = temp->next;
		 }
		 temp->next = new;
	 }
}

void PrintSList(SL *phead)
{
	while (phead)
	{
		printf("%d ", phead->data);
		phead = phead->next;
	}
}

void SListpopBack(SL** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	SL* temp = *pphead;
	if (temp->next == NULL)
	{
		free(temp);
		*pphead = NULL;
	}
	else 
	{
		while ((*(temp->next)).next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
	
}
void SListpushFront(SL** pphead, ListType input)
{
	SL* new = SListmalloc(input);
	new->data = input;
	new->next = *pphead;
	*pphead = new;


}
void SListpopFront(SL** pphead)
{
	
	SL* temp = *pphead;
	if (temp == NULL)
	{
		return;
	}
	*pphead = temp->next;
	free(temp);
	temp = NULL;
}

SL* Find(SL* phead, ListType input)
{
	SL* pre = NULL;
	SL* temp = phead;
	while (temp != NULL)
	{
		if (temp->data == input)
		{
			if (temp == phead)
			{
				return temp;
			}
			return pre;
		}
		pre = temp->next;
		temp = temp->next;
	}
	return NULL;
}

void AfterInsert(SL** pphead,SL* p, ListType input)
{
	if (p == NULL)
	{
		return;
	}
	SL* new = SListmalloc(input);
	new->data = input;
	new->next = p->next;
	p->next = new;
}