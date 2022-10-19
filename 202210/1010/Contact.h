#pragma once
#include<stdio.h>
#include<string.h>


#define MAX 1000

typedef struct PeoInFo
{
	char name[5];
	char sex;
	int age;
	char tel[12];
	char addr[20];
}PeoInFo;

struct Contact
{
	PeoInFo data[MAX];
	int size;
};


void Menu();

void Display();

void Init(struct Contact* p);

void AddContact(struct Contact* p);

void Print(struct Contact* p);