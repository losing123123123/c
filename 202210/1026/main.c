#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//C �⺯�� char *fgets(char *str, int n, FILE *stream) ��ָ������ stream ��ȡһ�У�
//�������洢�� str ��ָ����ַ����ڡ�����ȡ (n-1) ���ַ�ʱ�����߶�ȡ�����з�ʱ�����ߵ�
//���ļ�ĩβʱ������ֹͣ���������������


//C �⺯�� int fputs(const char *str, FILE *stream) ���ַ���д�뵽ָ������ stream �У������������ַ���
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
		//fputs("hello\n", pf);
		//fputs("word\n", pf);

		//��ȡ
		char arr[20] = { 0 };
		printf("%s\n", fgets(arr,4,pf));
		printf("%s", fgets(arr,4,pf));
		printf("%s", fgets(arr,4,pf));
	}
	fclose(pf);
	pf = NULL;

	return 0;
}