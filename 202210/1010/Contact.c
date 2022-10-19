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
		printf("��ѡ��:>");
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
		printf("��ϵ��������");
	}
	else
	{
		printf("��������ϵ��������>");
		scanf("%s", p->data[p->size].name);
		getchar();
		printf("��������ϵ���Ա�>");
		scanf("%c", &(p->data[p->size].sex));
		printf("��������ϵ�����䣺>");
		scanf("%d", &(p->data[p->size].age));
		printf("��������ϵ�˵绰��>");
		scanf("%s", p->data[p->size].tel);
		printf("��������ϵ�˵�ַ��>");
		scanf("%s", p->data[p->size].addr);

		printf("����ɹ���");
		p->size++;
	}
}

void Print(struct Contact* p)
{
	int i = 0;
	printf("%-5s\t%-2s\t%-2s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (i = 0; i < p->size; i++)
	{
		printf("%-5s\t%-2c\t%-2d\t%-12s\t%-20s\n", p->data[i].name, p->data[i].sex, p->data[i].age, p->data[i].tel, p->data[i].addr);
	}
}