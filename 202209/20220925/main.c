#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int i;
void test1()
{
	
	i--;  //-1
	if (i > sizeof(i))  //sizeof�õ���ֵ��һ��unsigned int���͵�ֵ���ڱȽϴ�Сʱ�Ὣ-1���unsigned int����
	{
		printf("y");
	}
	else
	{
		printf("n");
	}
}

//��s = a + aa + aaa + aaaa ....
void test2()
{
	int s = 0;
	int a = 0;
	int n = 0;
	int temp = 0;
	scanf("%d %d", &a, &n);
	for (i = 0; i < n; i++)
	{
		temp = temp * 10 + a;
		s = s + temp;
	}
	printf("%d", s);
}

//��ָ���ӡһ���������������
void test3()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("%d ", *(p + i));
	}
}

//��1-100000֮���ˮ�ɻ���
void test4()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		int temp = i;
		int n = 0;
		//��λ��
		while (temp)
		{
			temp = temp / 10;
			n++;
		}
		//��ÿλ���Ĵη�֮��
		temp = i;
		int sum = 0;
		while (temp)
		{
			sum = sum + pow(temp % 10, n);
			temp = temp / 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}

}

int main()
{

	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}