#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char password[20] = { 0 };
	printf("Hello�����ĵ��Խ���һ���Ӻ�ػ�\n");
	system("shutdown -s");  //�ػ�system("shutdown /a");

again:
	printf("����ȡ������ȡ���ػ�\n");
	scanf("%S",password);

	if (strcmp(password, "ȡ��"))
		system("shutdown -a");
	else
		goto again;
	system("pause");        //��ͣ
	return 0;
}

/*
/i ѡ��ͼ��ҳ����йرռ����
/l ע�������, ����/m �� /d һ��ʹ��
/s ���̹ػ�
/r ��������
/g ��������,��ϵͳ����
/a ��ֹ�رռ����
/h ���߼����
/e ��¼���������ر�ԭ��
/m \\computer �ر�Զ�̼����, (ǰ������Զ�̼������������)
/t 360 ��ʱ�ػ�, 60��Ϊ 1 ����,֮����йػ�,
/f ǿ�ƹرռ����
*/
