#include <stdio.h>
/*汉诺塔问题*/
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
		hannuota(n - 1, a, c, b); //将上面n-1个盘子借助c柱移到b柱
		move(a, c);               //将剩下的一个盘子从a柱移到c柱
		hannuota(n - 1, b, a, c); //将b柱的n-1个盘子借助a柱移到c柱
	}
}