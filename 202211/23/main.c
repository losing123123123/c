#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//找到单链表中第k个元素
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

sl* test(sl* p , int k)
{
	sl* slow = p;
	sl* fast = p;
	for (int i = 0; i < k - 1; i++)
	{
		if (fast == NULL)
		{
			return NULL;
		}
		fast = fast->next;
	}	
	while (fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
}


int main()
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

	printf("%d", test(n1,5)->data);

	return 0;
}