#define _CRT_SECURE_NO_WARNINGS
#include"Contact.h"


enum e
{
	exit,
	add,
	del,
	modify,
	search,
	print,
};
void Display()
{
	
	struct Contact con;
	Init(&con);
	int input = 0;
	
	do
	{
		Menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case exit:
			break;
		case add:
			AddContact(&con);
			break;
		case del:
			break;
		case modify:
			break;
		case search:
			break;
		case print:
			Print(&con);
			break;
		default:
			break;
		}
	} while (input);
}

void Menu()
{
	printf("*****************************\n");
	printf("*******     1.add     *******\n");
	printf("*******     2.del     *******\n");
	printf("*******     3.modify  *******\n");
	printf("*******     4.search  *******\n");
	printf("*******     5.print   *******\n");
	printf("*******     0.exit    *******\n");
	printf("*****************************\n");
}

void Init(struct Contact* p)
{
	p->size = 0;
	memset(p->data, 0, sizeof(p->data));
}

void AddContact(struct Contact *p)
{
	if ((p->size) > MAX)
	{
		printf("联系人已满！");
	}
	else
	{
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

		printf("保存成功！");
		p->size++;
	}
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