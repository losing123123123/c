#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//翻转单链表
typedef struct sinlist
{
	int data;
	struct sinlist* next;
}sl;

void PrintSList(sl* phead)
{
	while (phead)
	{
		printf("%d ", phead->data);
		phead = phead->next;
	}
}

sl* ReserverList(sl* phead)
{
	assert(phead);	
	sl* s1 = NULL;
	sl* s2 = phead;
	sl* s3 = phead->next;
	while (s2 != NULL)
	{
		s2->next = s1;
		s1 = s2;
		s2 = s3;
		if (s3 == NULL)
		{
			return s1;
		}
		s3 = s3->next;		
	}	
}


//思路二：头插
sl* ReserverList1(sl* phead)
{
	sl* newhead = NULL;
	sl* cur = phead;
	sl* n = phead->next;
	while (cur)
	{
		sl* n = cur->next;
		cur->next = newhead;
		newhead = cur;
		cur = n;
	}
	return newhead;
}


int main()
{
	sl* n1 = (sl*)malloc(sizeof(sl));
	sl* n2 = (sl*)malloc(sizeof(sl));
	sl* n3 = (sl*)malloc(sizeof(sl));
	sl* n4 = (sl*)malloc(sizeof(sl));
	sl* n5 = (sl*)malloc(sizeof(sl));
	
	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4; 
	n5->data = 5;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;
	sl* p = n1;

	PrintSList(n1);
	printf("\n");

	//PrintSList(ReserverList(NULL));
	PrintSList(ReserverList1(n1));


	return 0;
}