#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void Display()
{
	printf("************************\n");
	printf("*****    1.play    *****\n");
	printf("*****    0.exit    *****\n");
	printf("************************\n");
	printf("请选择->");
	
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
			printf("输入错误，请重新输入\n"); break;
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

//玩家
void Player(char data[LOW][COL],int low, int col)
{
	while (1)
	{
		int i = 0;
		int j = 0;
		printf("请输入棋子坐标->");
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
				printf("该坐标已有棋子，请重新输入->\n");
			}
		}
		else
			printf("输入坐标不存在，请重新输入->\n");
	}
}

//电脑
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

//判断输赢
int Iswin(char data[LOW][COL], int low, int col)
{
	int i = 0;
	int j = 0;

	//判断行
	for (i = 0; i < low ; i++)
	{
		for (j = 0; j < col - 2; j++)
		{
			if ((data[i][j] == data[i][j + 1]) && (data[i][j + 1] == data[i][j + 2]) && data[i][j] != ' ')
			{
				if (data[i][j] == '*')
				{
					printf("玩家赢");
				}
				else
					printf("电脑赢");

				return 0;
			}
		}
	}

	//判断列
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < low - 2; i++)
		{
			if ((data[i][j] == data[i + 1][j]) && (data[i + 1][j] == data[i + 2][j]) && data[i][j] != ' ')
			{
				if (data[i][j] == '*')
				{
					printf("玩家赢");
				}
				else
					printf("电脑赢");

				return 0;
			}
		}
	}

	//判断对角
	for (i = 0; i < low - 2; i++)
	{
		if ((data[i][i] == data[i + 1][i + 1]) && (data[i + 1][i + 1] == data[i + 2][i + 2]) && data[i][i] != ' ')
		{
			if (data[i][i] == '*')
			{
				printf("玩家赢");
			}
			else
				printf("电脑赢");

			return 0;
		}
	}

	for (i = 0; i < low - 2; i++)
	{
		if ((data[i+2][i] == data[i + 1][i+1]) && (data[i + 1][i+1] == data[i + 2][i]) && data[i+2][i] != ' ')
		{
			if (data[i+2][i] == '*')
			{
				printf("玩家赢");
			}
			else
				printf("电脑赢");

			return 0;
		}
	}

	//平局
	for (i = 0; i < low; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (data[i][j] == ' ')
				return 1;
		}
	}
	printf("平局");
	return 0;
}

void Game()
{
	
	char data[LOW][COL];

	//初始化数组
	Init(data, LOW, COL);

	//打印棋盘
	Print(data, LOW , COL);

	while (1)
	{
		//玩家走
		Player(data, LOW, COL);
		Print(data, LOW, COL);
		printf("\n");
		int a = Iswin(data, LOW, COL);
		if (a == 0)
		    return;

		//电脑走
		Computer(data, LOW, COL);
		Print(data, LOW, COL);
		printf("\n");
		a = Iswin(data, LOW, COL);
		if (a == 0)
			break;
	}
}