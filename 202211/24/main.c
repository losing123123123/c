#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"CreatList.h"

//合并两个顺序排列的单链表
void PrintSList(sl* phead)
{
	while (phead)
	{
		printf("%d ", phead->data);
		phead = phead->next;
	}
}

sl* test1( sl* list1, sl* list2 )
{
	if(list1 == NULL)
	{
		return list2;
	}
	if(list2 == NULL )
	{
		return list1;
	}
	sl* head = NULL;
	sl* cur = NULL;

	if (list1->data < list2->data || list1->data == list2->data)
	{
		head = list1;
		cur = head;
		list1 = list1->next;
	}
	else
	{
		head = list2;
		cur = head;
		list2 = list2->next;
	}

	while (list1 != NULL && list2 != NULL)
	{
		if (list1->data < list2->data || list1->data == list2->data)
		{
			cur->next = list1;
			list1 = list1->next;
		}
		else
		{
			cur->next = list2;
			list2 = list2->next;
		}
		cur = cur->next;
	}

	if (list1 == NULL)
	{
		cur->next = list2;
	}
	else
	{
		cur->next = list1;
	}
	return head;
}

//带哨兵位的头
sl* test2(sl* list1, sl* list2)
{
	if (list1 == NULL)
	{
		return list2;
	}
	if (list2 == NULL)
	{
		return list1;
	}
	sl* cur = NULL;
	sl* head = NULL;

	head = cur = (sl*)malloc(sizeof(sl));

	while (list1 != NULL && list2 != NULL)
	{
		if (list1->data < list2->data || list1->data == list2->data)
		{
			cur->next = list1;
			cur = list1;
			list1 = list1->next;
		}
		else
		{
			cur->next = list2;
			cur = list2;
			list2 = list2->next;
		}
		
	}

	if (list1 == NULL)
	{
		cur->next = list2;
	}
	else
	{
		cur->next = list1;
	}

	sl* l = head->next;
	free(head);
	return l;
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

int main()
{
	sl* list1 = CreatList();
	sl* list2 = CreatList();

	PrintSList(list1);
	printf("\n");
	PrintSList(list2);
	printf("\n");
//	PrintSList(test1(list1->next->next, list2));
	printf("\n");
	PrintSList(test2(list1, list2));
	free(list1);
	free(list2);
	list1 = list2 = NULL;
	return 0;
}