#include<stdio.h>

void main()
{
/*	int a = 10;
	int b = a++; //��ʹ�ã���++
	printf("%d\n", a); //11
	printf("%d", b);   //10
*/
/*	int a = 10;
	int b = ++a; //��++����ʹ��
	printf("%d\n", a); //11
	printf("%d", b);   //11
*/

	int a = 1 ? 2 : 3; //��Ŀ��������������ʽ1���������Ϊ���ʽ2��������ʽ1�����������Ϊ���ʽ3
	printf("%d", a);
	return 0;
	int b = 1, c = 2, d = 3;
	int e = (c = b + 1, b = c - 2, d = c + b); //�������Ҽ��㣬���Ϊ���ұߵı��ʽ��ֵ
	printf("%d", e);
}