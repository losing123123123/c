#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�ݹ�д��n�Ľ׳�

int A(int n)
{
	
	if (n == 1)
	{
		return 1;
	}
	else
		return n * A(n - 1);
}


//���õݹ鷴���ӡ�ַ���
void B(char* p)
{
	if (*(p + 1) != '\0')
	{
		B(p + 1);
		printf("%c", *p);
	}
	else
		printf("%c", *p);
}

//��5���ˣ���һ����10�꣬����ÿ���˱�ǰһ���˴�2�꣬�������˶�����
int C(int n)
{
	if (n == 1)
	{
		return 10;
	}
	else
		return C(n - 1) + 2;
}


int main()
{
	//printf("%d", A(5));

	//B("abcdef");
	printf("%d", C(5));
	return 0;
}