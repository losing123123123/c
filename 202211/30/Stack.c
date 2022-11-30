#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

void Init(s* stack)
{
	stack->data = NULL;
	stack->capacity = stack->top = 0;
}

void StackPush(s* stack, StackType input)
{
	if (stack->capacity == stack->top)
	{
		int newcapacity = stack->capacity == 0 ? 4 : stack->capacity * 2;
		s* temp = (s*)realloc(stack->data,  sizeof(s) * newcapacity);
		if (temp == NULL)
		{
			exit(-1);
		}
		stack->data = temp;
		stack->capacity = newcapacity;
		
	}
	stack->data[stack->top] = input;
	stack->top++;
}

void StackPop(s* stack)
{
	assert(stack);
	assert(stack->top);
	stack->top--;
}

void StackSize(s* stack)
{
	return stack->top--;
}

void StackDestroy(s* stack)
{
	assert(stack);
	free(stack->data);
	stack->data = NULL;
}

bool StackEmpty(s* stack)
{
	assert(stack);


	return stack->top == 0;
}

void Print(s stack)
{
	
	while (stack.top)
	{
		printf("%d ", stack.data[stack.top - 1]);
		printf("\n");
		stack.top--;
	}
}

void test(s stack)
{
	printf("\n%d", stack.data[stack.top - 2]);
}