#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//7-17 爬动的蠕虫

/*一条蠕虫长1寸，在一口深为N寸的井的底部。已知蠕虫每1分钟可以向上爬U寸，
但必须休息1分钟才能接着往上爬。在休息的过程中，蠕虫又下滑了D寸。就这样，
上爬和下滑重复进行。请问，蠕虫需要多长时间才能爬出井？这里要求不足1分钟
按1分钟计，并且假定只要在某次上爬过程中蠕虫的头部到达了井的顶部，那么蠕
虫就完成任务了。初始时，蠕虫是趴在井底的（即高度为0）。
*/
int main()
{
    int n, u, d;

    scanf("%d %d %d", &n, &u, &d);
    int sum = 0;
    int i = 0;
    while (sum < n)
    {
        i++;
        if (i % 2 == 0 && i != 0)
            sum = sum - d;
        else
            sum = sum + u;

    }
    printf("%d", i);
    return 0;
}