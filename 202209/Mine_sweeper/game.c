#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void Display()
{
	srand((unsigned int)time(NULL));
	printf("************************\n");
	printf("*****    1.play    *****\n");
	printf("*****    0.exit    *****\n");
	printf("************************\n");
	printf("��ѡ��->");

	int input = 0;

	do {
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

void Game()
{
	char mine[ROWS][COLS]; //����
	char data[ROWS][COLS]; //��ʾ

	Init(mine, ROWS, COLS, '0');
	Init(data, ROWS, COLS, '*');

	Setmine(mine, ROW, COL);

	//Print(mine, ROW, COL);
	Print(data, ROW, COL);

	Findmine(mine, data, ROW, COL);


}

void Init(char data[ROWS][COLS], int rows, int cols ,char symbol)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			data[i][j] = symbol;
		}
	}
}

void Print(char data[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------------ɨ����Ϸ--------------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", data[i][j]);
		}
		printf("\n");
	}
	printf("------------ɨ����Ϸ--------------\n");
}

void Setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = mine_count;
	while (count)
	{
		int x = rand() %row +1;
		int y = rand() %col +1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}

	}
}

 int Statsmine(char mine[ROWS][COLS],int x,int y)
{
	 int i = 0;
	 int j = 0;
	 int count = 0;
	 for (i = -1; i < 2; i++)
	 {
		 for (j = -1; j < 2; j++)
		 {
			 if (mine[x + i][y + j] == '1')
				 count++;
		 }
	 }
	 return count + '0';
}

void Findmine(char mine[ROWS][COLS], char data[ROWS][COLS], int row, int col)
{
	int x;
	int y;
	int win = 0;
	while (win < ROW * COL - mine_count )
	{
		printf("����������->");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�������ը����\n");
				Print(mine, ROW, COL);
				break;
			}
			else
			{
				int ret = Statsmine(mine, x, y);
				data[x][y] = ret;
				Print(data, ROW, COL);
				win++;
			}
		}
		else
			printf("�������겻���ڣ�����������\n");
	}
	if (win == ROW * COL - mine_count )
	{
		printf("��Ϸʤ����\n");
		Print(mine, ROW, COL);
	}
}