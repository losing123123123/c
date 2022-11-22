#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct sinlist
{
	int data;
	struct sinlist* next;
}sl;

sl* delete(sl * phead , int val)
{
	sl* previous = NULL;
	sl* temp = phead;
	while (temp)
	{
		if (temp->data == val)
		{
			if (temp == phead)
			{
				phead = temp->next;
				free(temp);
				temp = phead;
			}
			else
			{
				previous->next = temp->next;
				free(temp);
				temp = previous->next;
			}
			

		
		}
		else
		{
			previous = temp;
			temp = temp->next;
		}
	}
	return phead;
}
int main()
{
	

	sl* n1 = (sl*)malloc(sizeof(sl));
	sl* n2 = (sl*)malloc(sizeof(sl));
	sl* n3 = (sl*)malloc(sizeof(sl));
	sl* n4 = (sl*)malloc(sizeof(sl));
	sl* n5 = (sl*)malloc(sizeof(sl));
	n1->data = 2;
	n2->data = 2;
	n3->data = 2;
	n4->data = 4;
	n5->data = 5;
	
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;

	delete(n1, 2);


	return 0;
}