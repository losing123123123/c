#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//C 库函数 char *fgets(char *str, int n, FILE *stream) 从指定的流 stream 读取一行，
//并把它存储在 str 所指向的字符串内。当读取 (n-1) 个字符时，或者读取到换行符时，或者到
//达文件末尾时，它会停止，具体视情况而定


//C 库函数 int fputs(const char *str, FILE *stream) 把字符串写入到指定的流 stream 中，但不包括空字符。
int main()
{
	FILE* pf = fopen("text.txt", "r");//r为读，w为写
	if (pf == NULL)
	{
		perror("fopen");
	}
	else
	{
		//写入
		//fputs("hello\n", pf);
		//fputs("word\n", pf);

		//读取
		char arr[20] = { 0 };
		printf("%s\n", fgets(arr,4,pf));
		printf("%s", fgets(arr,4,pf));
		printf("%s", fgets(arr,4,pf));
	}
	fclose(pf);
	pf = NULL;

	return 0;
}