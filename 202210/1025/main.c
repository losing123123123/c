#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* pf = fopen("text.txt", "r");//rΪ����wΪд
	if (pf == NULL)
	{
		perror("fopen");
	}
	else
	{
		//д��
		//fputc('h', pf);
		//fputc('e', pf);

		//��ȡ
		printf("%c", fgetc(pf));
		printf("%c", fgetc(pf));
	}
	fclose(pf);
	pf = NULL;

	return 0;
}