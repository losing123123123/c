#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void Display()
{
	printf("************************\n");
	printf("*****    1.play    *****\n");
	printf("*****    0.exit    *****\n");
	printf("************************\n");
	printf("��ѡ��->");
	
	int input = 0;
	
	do{
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			Game();
			input = 0;
			break;
		default:
			printf("�����������������\n"); break;
		}
	} while (input);
	
}


void Init(char data[LOW][COL], int low, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < low; i++)
	{
		for (j = 0; j < col; j++)
		{
			data[i][j] = ' ';
		}
	}
}
void Print(char data[LOW][COL],int low, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < low; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", data[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < low - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}		
	}
}

//���
void Player(char data[LOW][COL],int low, int col)
{
	while (1)
	{
		int i = 0;
		int j = 0;
		printf("��������������->");
		scanf("%d %d", &i, &j);
		if ((i <= low && i >= 1) && (j <= col && j >= 1))
		{
			if (data[i - 1][j - 1] == ' ')
			{
				data[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("�������������ӣ�����������->\n");
			}
		}
		else
			printf("�������겻���ڣ�����������->\n");
	}
}

//����
void Computer(char data[LOW][COL], int low, int col)
{
	srand((unsigned)time(NULL));
	while (1)
	{
		int a = rand() % low;
		int b = rand() % col;
		if (data[a][b] == ' ')
		{
			data[a][b] = '#';
			break;
		}
	}
}

//�ж���Ӯ
int Iswin(char data[LOW][COL], int low, int col)
{
	int i = 0;
	int j = 0;

	//�ж���
	for (i = 0; i < low ; i++)
	{
		for (j = 0; j < col - 2; j++)
		{
			if ((data[i][j] == data[i][j + 1]) && (data[i][j + 1] == data[i][j + 2]) && data[i][j] != ' ')
			{
				if (data[i][j] == '*')
				{
					printf("���Ӯ");
				}
				else
					printf("����Ӯ");

				return 0;
			}
		}
	}

	//�ж���
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < low - 2; i++)
		{
			if ((data[i][j] == data[i + 1][j]) && (data[i + 1][j] == data[i + 2][j]) && data[i][j] != ' ')
			{
				if (data[i][j] == '*')
				{
					printf("���Ӯ");
				}
				else
					printf("����Ӯ");

				return 0;
			}
		}
	}

	//�ж϶Խ�
	for (i = 0; i < low - 2; i++)
	{
		if ((data[i][i] == data[i + 1][i + 1]) && (data[i + 1][i + 1] == data[i + 2][i + 2]) && data[i][i] != ' ')
		{
			if (data[i][i] == '*')
			{
				printf("���Ӯ");
			}
			else
				printf("����Ӯ");

			return 0;
		}
	}

	for (i = 0; i < low - 2; i++)
	{
		if ((data[i+2][i] == data[i + 1][i+1]) && (data[i + 1][i+1] == data[i + 2][i]) && data[i+2][i] != ' ')
		{
			if (data[i+2][i] == '*')
			{
				printf("���Ӯ");
			}
			else
				printf("����Ӯ");

			return 0;
		}
	}

	//ƽ��
	for (i = 0; i < low; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (data[i][j] == ' ')
				return 1;
		}
	}
	printf("ƽ��");
	return 0;
}

void Game()
{
	
	char data[LOW][COL];

	//��ʼ������
	Init(data, LOW, COL);

	//��ӡ����
	Print(data, LOW , COL);

	while (1)
	{
		//�����
		Player(data, LOW, COL);
		Print(data, LOW, COL);
		printf("\n");
		int a = Iswin(data, LOW, COL);
		if (a == 0)
		    return;

		//������
		Computer(data, LOW, COL);
		Print(data, LOW, COL);
		printf("\n");
		a = Iswin(data, LOW, COL);
		if (a == 0)
			break;
	}
}