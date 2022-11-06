#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

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
		//fputc('h', pf);
		//fputc('e', pf);

		//读取
		printf("%c", fgetc(pf));
		printf("%c", fgetc(pf));
	}
	fclose(pf);
	pf = NULL;

	return 0;
}