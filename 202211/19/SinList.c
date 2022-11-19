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
		printf("%d", phead->data);
		phead = phead->next;
	}
}

void SListpopBack(SL** pphead)
{
	SL* temp = *pphead;
	while ((*(temp->next)).next != NULL)
	{
		temp = temp->next;
	}
	temp->next = NULL;
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
	  *pphead =  ( * (*pphead)).next;
}