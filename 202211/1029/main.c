#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define M 10
#ifdef M   //���������M����������������룬���û����M��������䲻�������
int main()
{
	printf("%s\n", __DATE__);      //��ӡ����
	printf("%d\n", __LINE__);      //��ӡ����
	printf("%s\n", __TIME__);      //��ӡʱ��
	printf("%s\n", __FUNCTION__);  //��ӡ������
	printf("%s\n", __FILE__);      //��ӡ�ļ������ļ���ַ
	test();
	return 0;
}
#endif


#if 0     //��������������������������
int test()
{
	printf("1");
	return 0;
}

#elif 0   //��������������������������
int test()
{
	printf("2");
	return 0;
}
#else     //����������������������������������
int test()
{
	printf("3");
	return 0;
}
#endif