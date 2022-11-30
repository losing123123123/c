#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int ListType;

typedef struct List
{
	ListType data;
	struct List* next;
	struct List* prev;
}List;

List* Init();
void PrintList(List* phead);

void SListpushBack(List* phead, ListType input);
void SListpopBack(List* phead);
void SListpushFront(List* phead, ListType input);
void SListpopFront(List* phead);
List* Find(List* phead, ListType input);
void AfterInsert(List* phead,  ListType input);
void FrontInsert(List* phead,  ListType input);
