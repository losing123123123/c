#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define M 10
#ifdef M   //如果定义了M，则下面语句参与编译，如果没定义M，下面语句不参与编译
int main()
{
	printf("%s\n", __DATE__);      //打印日期
	printf("%d\n", __LINE__);      //打印行数
	printf("%s\n", __TIME__);      //打印时间
	printf("%s\n", __FUNCTION__);  //打印函数名
	printf("%s\n", __FILE__);      //打印文件名及文件地址
	test();
	return 0;
}
#endif


#if 0     //如果条件成立，下面语句参与编译
int test()
{
	printf("1");
	return 0;
}

#elif 0   //如果条件成立，下面语句参与编译
int test()
{
	printf("2");
	return 0;
}
#else     //如果上面条件都不成立，下面语句参与编译
int test()
{
	printf("3");
	return 0;
}
#endif