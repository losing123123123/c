#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct sinlist
{
	int data;
	struct sinlist* next;
	struct sinlist* random;
}sl;

void PrintSList(sl* phead)
{
	if (phead == NULL)
	{
		printf("NULL");
	}
	while (phead)
	{
		printf("%d ", phead->data);
		phead = phead->next;
	}
}

sl* test(sl *list)
{
	if (list == NULL)
	{
		return NULL;
	}
	sl* phead = list;
	while (phead)
	{
		sl* new = (sl*)malloc(sizeof(sl));
		new->data = phead->data;
		new->next = phead->next;

		phead->next = new;

		new->random = NULL;

		phead = phead->next->next;
	}
	phead = list->next;
	sl* previous = list;
	while (phead && phead->next)
	{
		if (previous->random == NULL)
		{
			phead->random = NULL;
		}
		else
		{
			phead->random = previous->random->next;
		}
		
		phead = phead->next->next;
		previous = previous->next->next;
	}

	sl* newhead = NULL;
	sl* cur = NULL;
	phead = list;

	newhead = phead->next;
	cur = phead->next;
	while (cur->next)
	{		
		phead->next = cur->next;
		cur = cur->next->next;
		phead = phead->next;
	}
	cur->next = NULL;
	phead->next = NULL;
	return newhead;
}

int main()
{
	sl* n1 = (sl*)malloc(sizeof(sl));
	sl* n2 = (sl*)malloc(sizeof(sl));
	sl* n3 = (sl*)malloc(sizeof(sl));
	sl* n4 = (sl*)malloc(sizeof(sl));
	sl* n5 = (sl*)malloc(sizeof(sl));
	sl* n6 = (sl*)malloc(sizeof(sl));
	sl* n7 = (sl*)malloc(sizeof(sl));
	sl* n8 = (sl*)malloc(sizeof(sl));
	sl* n9 = (sl*)malloc(sizeof(sl));

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;
	n5->data = 5;
	n6->data = 6;
	n7->data = 7;
	n8->data = 8;
	n9->data = 9;

	n1->random = n4;
	n2->random = n4;
	n3->random = n4;
	n4->random = n4;
	n5->random = n4;
	n6->random = n4;
	n7->random = n4;
	n8->random = n4;
	n9->random = n4;
	
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;
	n7->next = n8;
	n8->next = n9;
	n9->next = NULL;

	sl* ret = test(n1);
	PrintSList(ret);
	printf("\n");
	printf("%d\n", ret->random->data);
	printf("%d\n", ret->next->random->data);
	printf("%d\n", ret->next->next->random->data);
	printf("%d\n", ret->next->next->next->random->data);
	printf("%d\n", ret->next->next->next->next->random->data);
	printf("%d\n", ret->next->next->next->next->next->random->data);
	printf("%d\n", ret->next->next->next->next->next->next->random->data);
	printf("%d\n", ret->next->next->next->next->next->next->next->random->data);
	printf("%d\n", ret->next->next->next->next->next->next->next->next->random->data);

	return 0;
}