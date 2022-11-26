#pragma once

typedef struct sinlist
{
	int data;
	struct sinlist* next;
}sl;


 sl* CreatList();