#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//������������
int main()
{

	int i = 0;
	int a = 1;
	int b = 1;
	for (i = 1; i <= 40; i+=2)
	{
		if (i == 1)
		{
			
		}
		else
		{
			a = a + b;
			b = a + b;
		}
		printf("��%d���µ���������Ϊ��%d��\n", i, a);
		printf("��%d���µ���������Ϊ��%d��\n", i+1, b);
	}
	


	return 0;
}