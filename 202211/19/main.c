#define _CRT_SECURE_NO_WARNINGS
#include"SinList.h"

int main()
{
	SL *List = NULL;
	SListpushBack(&List, 1);
	SListpushBack(&List, 2);
	SListpushBack(&List, 3);
	SListpushBack(&List, 4);
	SListpushFront(&List, 1);
	SListpushFront(&List, 2);
	SListpushFront(&List, 3);
	SListpushFront(&List, 4);

	//SListpopBack(&List);
	//SListpopBack(&List);
	//SListpopBack(&List);
	SListpopFront(&List);
	SListpopFront(&List);

	PrintSList(List);

	return 0;
}