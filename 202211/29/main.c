#define _CRT_SECURE_NO_WARNINGS
#include"List.h"


int main()
{

	List* list = Init();
	/*SListpushBack(list, 1);
	SListpushBack(list, 2);
	SListpushBack(list, 3);
	SListpushBack(list, 4);*/

	/*SListpopBack(list);
	SListpopBack(list);
	SListpopBack(list);*/


	PrintList(list);

	SListpushFront(list, 1);
	SListpushFront(list, 2);
	SListpushFront(list, 3);
	SListpushFront(list, 4);

	/*SListpopFront(list);
	SListpopFront(list);
	SListpopFront(list);
	SListpopFront(list);*/

	AfterInsert(Find(list, 4), 40);
	
	AfterInsert(Find(list, 1), 10);
	FrontInsert(Find(list, 10), 100);
	FrontInsert(Find(list, 4), 400);

	PrintList(list);

	AfterInsert(list->prev, 5 );
	FrontInsert(list, 6 );
	FrontInsert(list->next, 7 );

	PrintList(list);
	
	printf("%d\n", Find(list, 400)->data);
	printf("%d\n", list->prev->data);
	printf("%d\n", list->next->next->next->data);
	//printf("%d\n", Find(list, 10)->next->next->data);
	//printf("%d\n", Find(list, 100)->prev->data);
	printf("%d\n", Find(list, 1)->next->data);
	return 0;
}