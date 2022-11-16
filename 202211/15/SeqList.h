#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef  int SLtype;

typedef struct SeqList
{
	SLtype * a;
	int size;
	int capacity;
}SL;

void Init(SL* L);

void SeqListpushBack(SL *L, SLtype input);
void SeqListpopBack(SL *L);
void SeqListpushfront(SL* L, SLtype input);
void SeqListpopfront(SL *L);
void SeqListprint(SL *L);
void SeqListDestroy(SL *L);
void SeqListpushN(SL* L, SLtype input, int N);

