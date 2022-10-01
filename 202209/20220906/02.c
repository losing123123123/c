#include<stdio.h>

void main()
{
/*	int a = 10;
	int b = a++; //先使用，后++
	printf("%d\n", a); //11
	printf("%d", b);   //10
*/
/*	int a = 10;
	int b = ++a; //先++，后使用
	printf("%d\n", a); //11
	printf("%d", b);   //11
*/

	int a = 1 ? 2 : 3; //三目操作符，如果表达式1成立，结果为表达式2，如果表达式1不成立，结果为表达式3
	printf("%d", a);
	return 0;
	int b = 1, c = 2, d = 3;
	int e = (c = b + 1, b = c - 2, d = c + b); //从左往右计算，结果为最右边的表达式的值
	printf("%d", e);
}