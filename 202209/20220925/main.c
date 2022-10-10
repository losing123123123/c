#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int i;
void test1()
{
	
	i--;  //-1
	if (i > sizeof(i))  //sizeof得到的值是一个unsigned int类型的值，在比较大小时会将-1变成unsigned int类型
	{
		printf("y");
	}
	else
	{
		printf("n");
	}
}

//求s = a + aa + aaa + aaaa ....
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

//用指针打印一个整型数组的内容
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

//求1-100000之间的水仙花数
void test4()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		int temp = i;
		int n = 0;
		//求位数
		while (temp)
		{
			temp = temp / 10;
			n++;
		}
		//求每位数的次方之和
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