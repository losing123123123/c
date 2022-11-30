#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef char StackType;

typedef struct Stack
{
	StackType* data;
	int top;
	int capacity;
}s;

void Init(s * stack);
void StackPush(s* stack, StackType input);
void StackPop(s* stack);
void StackSize(s* stack);
void StackDestroy(s* stack);
bool StackEmpty(s* stack);

void Print(s stack);