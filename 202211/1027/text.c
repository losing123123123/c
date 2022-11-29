#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//C 库函数 int fscanf(FILE *stream, const char *format, ...) 从流 stream 读取格式化输入。

int text1()
{
	FILE* pf = fopen("text.txt", "w");//r为读，w为写
	if (pf == NULL)
	{
		perror("fopen");
	}
	else
	{
		char arr[20] = { 0 };
		//写入
		fprintf(pf, "%s %s", "world", "hello");

		//读取
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
//ptr -- 这是指向要被写入的元素数组的指针。
//size -- 这是要被写入的每个元素的大小，以字节为单位。
//nmemb -- 这是元素的个数，每个元素的大小为 size 字节。
//stream -- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输出流。
void text2()
{
	FILE* pf = fopen("text2.txt", "w");//r为读，w为写
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
//ptr -- 这是指向带有最小尺寸 size*nmemb 字节的内存块的指针。
//size -- 这是要读取的每个元素的大小，以字节为单位。
//nmemb -- 这是元素的个数，每个元素的大小为 size 字节。
//stream -- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输入流。
void text3()
{
	FILE* pf = fopen("text2.txt", "r");//r为读，w为写
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