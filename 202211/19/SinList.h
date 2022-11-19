#pragma once

#include<stdio.h>
#include<stdlib.h>
typedef int ListType;

typedef struct SinList
{
	ListType data;
	struct SinList* next;
}SL;

void PrintSList(SL* phead);

void SListpushBack(SL** pphead, ListType input);
void SListpopBack(SL** pphead);
void SListpushFront(SL** pphead, ListType input);
void SListpopFront(SL**Lpphead);
