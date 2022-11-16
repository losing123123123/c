#define _CRT_SECURE_NO_WARNINGS

#include"SeqList.h"

void Init(SL *L)
{
	L->a = NULL;
	L->size = 0;
	L->capacity = 0;
}

static void CheckSeqList(SL* L)
{
	if (L->size+1 >= L->capacity)
	{
		SLtype* temp = (SLtype*)realloc(L->a, (4 + L->capacity) * sizeof(SLtype));
		if (temp == NULL)
		{
			perror(SeqListpushBack);
			exit(-1);
		}
		L->a = temp;
		L->capacity += 4;
	}
}

void SeqListpushBack(SL *L , SLtype input)
{
	CheckSeqList(L);
	L->a[L->size] = input;
	L->size++;
}

void SeqListpopBack(SL *L)
{
	if (L->size > 0)
	{
		L->size--;
	}

}

void SeqListpushfront(SL *L, SLtype input)
{
	CheckSeqList(L);
	int i = 0;
	for (i = L->size-1; i >= 0; i--)
	{
		L->a[i+1] = L->a[i];
	}
	L->a[0] = input;
	L->size++;
}

void SeqListpopfront(SL *L)
{
	if (L->size != 0)
	{
		int i = 0;
		for (i = 1; i <= L->size; i++)
		{
			L->a[i - 1] = L->a[i];
		}
		L->size--;
	}
}

void SeqListprint(SL *L)
{
	int i = 0;
	for (i = 0; i < L->size; i++)
	{
		printf("%d ", L->a[i]);
	}
}


void SeqListpushN(SL* L, SLtype input, int N)
{
	if (N > 0 && N < L->size)
	{
		CheckSeqList(L);
		int i = 0;
		for (i = L->size; i >= N-1; i--)
		{
			L->a[i + 1] = L->a[i];
		}
		L->a[N-1] = input;
		L->size++;
	}
	
}

void SeqListDestroy(SL* L)
{
	free(L->a);
	L->a = NULL;
	L->capacity = L->size = 0;
}