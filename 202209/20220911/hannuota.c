#include <stdio.h>
/*��ŵ������*/
void move(int x, int y)
{
	printf("%c->%c\n", x, y);
}
void hannuota(int n, char a, char b, char c)
{

	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		hannuota(n - 1, a, c, b); //������n-1�����ӽ���c���Ƶ�b��
		move(a, c);               //��ʣ�µ�һ�����Ӵ�a���Ƶ�c��
		hannuota(n - 1, b, a, c); //��b����n-1�����ӽ���a���Ƶ�c��
	}
}