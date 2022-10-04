#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char password[20] = { 0 };
	printf("Hello，您的电脑将在一分钟后关机\n");
	system("shutdown -s");  //关机system("shutdown /a");

again:
	printf("输入取消即可取消关机\n");
	scanf("%S",password);

	if (strcmp(password, "取消"))
		system("shutdown -a");
	else
		goto again;
	system("pause");        //暂停
	return 0;
}

/*
/i 选择图形页面进行关闭计算机
/l 注销计算机, 不能/m 和 /d 一起使用
/s 立刻关机
/r 重新启动
/g 重新启动,并系统重启
/a 终止关闭计算机
/h 休眠计算机
/e 记录计算机意外关闭原因
/m \\computer 关闭远程计算机, (前提是与远程计算机建立连接)
/t 360 定时关机, 60秒为 1 分钟,之后进行关机,
/f 强制关闭计算机
*/
