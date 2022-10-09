#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//输入整型数字，打印他二进制1的个数
int NumberOf1( unsigned int a)
{
	int count = 0;
	while (a)
	{
		if (a % 2 == 1)
		{
			count++;
		}
		a /= 2;
	}
	
	return count;

}

int NumberOf2(int a)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((a & 1) == 1)
			count++;
		a  =  a  >> 1;
	}
	return count;
}

int NumberOf3(int a)
{
	int count = 0;
	if(a ==0)
	{
		return count;
	}
	else
	{
		while (a = a & (a - 1))
		{
			count++;
		}
		count++;
		return count;
	}
}


int main()
{
	int a = 0; //1010
	printf("%d",NumberOf3(a));
	return 0;
}



//  10/2 = 5 .... 0    1010
// 
//  5/2  = 2 .... 1    0101
// 
//  2/2  = 1 .... 0    0010
// 
//  1/2  = 0 .... 1    0000




//  9/2  = 4 .... 1    1001
// 
//  4/2  = 2 .... 0    0100
// 
//  2/2  = 1 .... 0    0010  
// 
//  1/2  = 0 .... 1    0000


//-1
//1000000 00000000 00000000 00000001
//1111111 11111111 11111111 11111110
//1111111 11111111 11111111 11111111

//0000000 00000000 00000000 00000001


//   n  = ( n *n-1)
//  1010
//  1001
//  1000
//  0111
//  0000


//1111
//1110
//1110
//1101
//1100
//1011
//1000
//0111
//0000