#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//C �⺯�� int fscanf(FILE *stream, const char *format, ...) ���� stream ��ȡ��ʽ�����롣

int text1()
{
	FILE* pf = fopen("text.txt", "w");//rΪ����wΪд
	if (pf == NULL)
	{
		perror("fopen");
	}
	else
	{
		char arr[20] = { 0 };
		//д��
		fprintf(pf, "%s %s", "world", "hello");

		//��ȡ
		//fscanf(pf, "%s", arr);
		//printf("%s\n", arr);
		//fscanf(pf, "%s", arr);
		//printf("%s", arr);
	}
	fclose(pf);
	pf = NULL;

}

struct S
{
	int i;
	float f;
	char c[10];
};


//size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
//ptr -- ����ָ��Ҫ��д���Ԫ�������ָ�롣
//size -- ����Ҫ��д���ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ��
//nmemb -- ����Ԫ�صĸ�����ÿ��Ԫ�صĴ�СΪ size �ֽڡ�
//stream -- ����ָ�� FILE �����ָ�룬�� FILE ����ָ����һ���������
void text2()
{
	FILE* pf = fopen("text2.txt", "w");//rΪ����wΪд
	if (pf == NULL)
	{
		perror("fopen");
	}
	else
	{
		struct S s = { 5,3.14,"abcdef" };
		fwrite(&s, sizeof(struct S), 1, pf);
	}

	fclose(pf);
	pf = NULL;
}



//size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
//ptr -- ����ָ�������С�ߴ� size*nmemb �ֽڵ��ڴ���ָ�롣
//size -- ����Ҫ��ȡ��ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ��
//nmemb -- ����Ԫ�صĸ�����ÿ��Ԫ�صĴ�СΪ size �ֽڡ�
//stream -- ����ָ�� FILE �����ָ�룬�� FILE ����ָ����һ����������
void text3()
{
	FILE* pf = fopen("text2.txt", "r");//rΪ����wΪд
	struct S s = { 0 };
	if (pf == NULL)
	{
		perror("fopen");
	}
	else
	{
		
		fread(&s, sizeof(struct S), 1, pf);
	}
	printf("%d,%f,%s", s.i, s.f, s.c);
	fclose(pf);
	pf = NULL;
}