#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

void test()
{
	Queue q;
	Init(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	QueuePop(&q);
	QueuePop(&q);

	Print(q);

	printf("\n%d", QueueEmpty(&q));
	printf("\n%d", QueueSize(q));
	QueueDestroy(&q);

	Print(q);
}

int main()
{
	test();
	return 0;
}