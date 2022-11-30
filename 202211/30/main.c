#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

void test1()
{
	s stack;
	Init(&stack);
	StackPush(&stack, 1);
	StackPush(&stack, 2);
	StackPush(&stack, 3);
	StackPush(&stack, 4);
	StackPush(&stack, 5);

	Print(stack);
	//test(stack);
	printf("\n-------------\n");

	StackPop(&stack);
	StackPop(&stack);
	StackPop(&stack);
	StackPop(&stack);
	StackPop(&stack);

	Print(stack);
	StackDestroy(&stack);
}

int test2(char input[])
{
	assert(input);
	s stack;
	Init(&stack);
	int i = 0;
	for (i = 0; input[i] != NULL; i++)
	{
		if (input[i] == '(' || input[i] == '{' || input[i] == '[')
		{
			StackPush(&stack, input[i]);
		}
		else
		{
			if (StackEmpty(&stack))
			{
				StackDestroy(&stack);
				return 0;
			}
			if (input[i] == ')' && stack.data[stack.top - 1] != '(' || 
				input[i] == ']' && stack.data[stack.top - 1] != '[' || 
				input[i] == '}' && stack.data[stack.top - 1] != '{')
			{
				StackDestroy(&stack);
				return 0;
				
			}
			else
			{
				StackPop(&stack);
			}
		}
	}
	int ret = StackEmpty(&stack);
	StackDestroy(&stack);
	return ret;

}

int main()
{
	char input[] = "]";
	printf("%d", test2(input));
	return 0;
}