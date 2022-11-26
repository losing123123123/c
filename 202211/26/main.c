#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//判断两个单链表是否相交，如果是，返回相交节点，如果不是，返回NULL
typedef struct sinlist
{
	int data;
	struct sinlist* next;
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

sl* test(sl* list1 , sl* list2)
{
	if (list1 == NULL || list2 == NULL)
	{
		return NULL;
	}
	//判断是否相交
	sl* listA = list1;
	sl* listB = list2;
	int lenA = 1;
	int lenB = 1;
	while (listA->next) 
	{
		listA = listA->next;
		lenA += 1;
	}
	while (listB->next)
	{
		listB = listB->next;
		lenB += 1;
	}
	if (listA != listB)
	{
		return NULL;
	}

	int gap = abs(lenA - lenB);
	//int gap = lenA - lenB > 0 ? lenA - lenB : lenB - lenA;

	listA = list1;
	listB = list2;
	if (lenA < lenB)
	{
		listA = list2;
		listB = list1;
	}

	while (gap--)
	{
		listA = listA->next;
	}

	while (listA && listB)
	{
		if (listA->data == listB->data)
		{
			return listA;
		}
		listA = listA->next;
		listB = listB->next;
	}

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
	//链表1
	n1->next = n2;
	n2->next = n3;
	n3->next = n6;
	n6->next = n7;
	n7->next = n8;
	n8->next = n9;
	n9->next = NULL;
	//链表2
	n4->next = n5;
	n5->next = n1;

	PrintSList(n1);
	printf("\n");
	PrintSList(n4);
	printf("\n");
	PrintSList(test(NULL,n4));

	return 0;
}