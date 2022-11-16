#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

void test()
{
	SL L;
	Init(&L);
	SeqListpushBack(&L,10);
	SeqListpushBack(&L,20);
	SeqListpushBack(&L,30);
	SeqListpushBack(&L,40);

	//SeqListpopBack(&L);

	SeqListpushfront(&L, 1);
	SeqListpushfront(&L, 2);
	SeqListpushN(&L, 100, 3);
	SeqListpushN(&L, 1000, 4);
	SeqListpushN(&L, 10000, 5);
	SeqListpushN(&L, 100000, 6);
	

	SeqListprint(&L);
	SeqListDestroy(&L);
}
int main()
{
	test();

	return 0;
}