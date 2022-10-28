#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

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
	PeoInFo *data;
	int size;
	int length;
};

void AddContact(struct Contact* p)
{
	if ((p->size) == p->length)
	{
		PeoInFo* ptr = (PeoInFo*)realloc(p->data, (p->length + 2) * sizeof(PeoInFo));
		if (ptr == NULL)
		{
			printf("增容失败");
			return;
		}
		else
		{
			p->data = ptr;
			p->length += 2;
			printf("增容成功\n");
		}
	}	
		printf("请输入联系人姓名：>");
		scanf("%s", p->data[p->size].name);
		getchar();
		printf("请输入联系人性别：>");
		scanf("%c", &(p->data[p->size].sex));
		printf("请输入联系人年龄：>");
		scanf("%d", &(p->data[p->size].age));
		printf("请输入联系人电话：>");
		scanf("%s", p->data[p->size].tel);
		printf("请输入联系人地址：>");
		scanf("%s", p->data[p->size].addr);

		printf("保存成功！\n");
		p->size++;	
}

void Print(struct Contact* p)
{
	int i = 0;
	printf("%-5s\t%-2s\t%-2s\t%-12s\t%-20s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (i = 0; i < p->size; i++)
	{
		printf("%-5s\t%-2c\t%-2d\t%-12s\t%-20s\n", p->data[i].name, p->data[i].sex, p->data[i].age, p->data[i].tel, p->data[i].addr);
	}
}

int main()
{
	struct Contact con;
	con.data = (PeoInFo *)calloc(3, sizeof(PeoInFo));
	con.length = 3;
	con.size = 0;
	int input = 0;
	printf("请输入:>");
	scanf("%d", &input);
	while(input)
	{
		AddContact(&con);
		printf("请输入:>");
		scanf("%d", &input);
	}
	Print(&con);
	free(con.data);

	return 0;
}