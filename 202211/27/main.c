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

sl* test(sl* list)
{
	if (list == NULL)
	{
		return NULL;
	}
	//判断快慢指针是否相遇
	//如果相遇，则单链表带环，否则不带环
	sl* slow = list;
	sl* fast = list;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			//快慢指针相遇了，代表带有闭环
			slow = list;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return slow;
		}
	}
	return NULL;
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
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;
	n7->next = n8;
	n8->next = n9;
	n9->next = NULL;

	printf("%d",test(n4) == NULL? 0: test(n1)->data);

	return 0;
}