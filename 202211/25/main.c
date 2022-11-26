#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


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

sl* CreatList()
{
	sl* n1 = (sl*)malloc(sizeof(sl));
	sl* n2 = (sl*)malloc(sizeof(sl));
	sl* n3 = (sl*)malloc(sizeof(sl));
	sl* n4 = (sl*)malloc(sizeof(sl));
	sl* n5 = (sl*)malloc(sizeof(sl));
	sl* n6 = (sl*)malloc(sizeof(sl));

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;
	n5->data = 5;
	n6->data = 6;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = NULL;

	return n1;
}


sl* test(sl * list , int k)
{
	sl* lessHead = NULL;
	sl* lessTail = NULL;
	sl* greaterHead = NULL;
	sl* greaterTail = NULL;
	lessHead = lessTail = (sl*)malloc(sizeof(sl));
	greaterHead = greaterTail = (sl*)malloc(sizeof(sl));

	while (list)
	{
		if (list->data < k)
		{
			lessTail->next = list;
			lessTail = list;
		}
		else
		{
			greaterTail->next = list;
			greaterTail = list;
		}
		list = list->next;
	}
	greaterTail->next = NULL;
	lessTail->next = greaterHead->next;

	sl* newHead = lessHead->next;
	free(lessHead);
	free(greaterHead);
	return newHead;
}

int main()
{
	sl* list1 = CreatList();
	sl* list2 = CreatList();
	list2->next->data = 7;
	list2->next->next->data = 8;
	list2->next->next->next->data = 9;
	PrintSList(list1);
	printf("\n");
	PrintSList(list2);
	printf("\n");
	PrintSList(test(list2, 8));


	return 0;
}