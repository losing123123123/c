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
			printf("����ʧ��");
			return;
		}
		else
		{
			p->data = ptr;
			p->length += 2;
			printf("���ݳɹ�\n");
		}
	}	
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

		printf("����ɹ���\n");
		p->size++;	
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

int main()
{
	struct Contact con;
	con.data = (PeoInFo *)calloc(3, sizeof(PeoInFo));
	con.length = 3;
	con.size = 0;
	int input = 0;
	printf("������:>");
	scanf("%d", &input);
	while(input)
	{
		AddContact(&con);
		printf("������:>");
		scanf("%d", &input);
	}
	Print(&con);
	free(con.data);

	return 0;
}