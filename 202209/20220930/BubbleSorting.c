#define _CRT_SECURE_NO_WARNINGS

void Exchange(char* x, char* y,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int tmp = *x;
		*x = *y;
		*y = tmp;
		x++;
		y++;
	}
}

void BubbleSorting(void* base, int size, int width, int (*cmp())(const void* e1,const void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (cmp( ( char* )base+ j * width, ( char* )base + ( j + 1 ) * width) > 0)
			{
				Exchange((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}