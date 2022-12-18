#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*7-18 二分法求多项式单根*/
/*二分法求函数根的原理为：如果连续函数f(x)在区间[a,b]的两个端点取值异号，
即f(a)f(b)<0，则它在这个区间内至少存在1个根r，即f(r)=0。

二分法的步骤为：

检查区间长度，如果小于给定阈值，则停止，输出区间中点(a+b)/2；否则
如果f(a)f(b)<0，则计算中点的值f((a+b)/2)；
如果f((a+b)/2)正好为0，则(a+b)/2就是要求的根；否则
如果f((a+b)/2)与f(a)同号，则说明根在区间[(a+b)/2,b]，令a=(a+b)/2，重复循环；
如果f((a+b)/2)与f(b)同号，则说明根在区间[a,(a+b)/2]，令b=(a+b)/2，重复循环。
本题目要求编写程序，计算给定3阶多项式f(x)=a3 * x^3 + a2 * x^2 + a1 * x +a0;​
在给定区间[a,b]内的根。*/

double a3 = 0, a2 = 0, a1 = 0, a0 = 0;
double sum(double x)
{
    double Sum = a3 * x * x * x + a2 * x * x + a1 * x + a0;
    return Sum;
}

int main()
{
    double a, b;
    double mid = 0;
    scanf("%lf %lf %lf %lf", &a3, &a2, &a1, &a0);
    scanf("%lf %lf", &a, &b);
    while ((b - a) >= 0.001 && sum(a) * sum(b) <= 0) //与逻辑 与或非
    {
        if (sum(a) == 0)
        {
            mid = a;
            break;
        }
        if (sum(b) == 0)
        {
            mid = b;
            break;
        }
        mid = (a + b) / 2;
        if (sum(mid) == 0)
        {
            break;
        }
        else
        {
            if (sum(mid) * sum(a) >= 0)
            {
                a = mid;
            }
            else
            {
                b = mid;
            }
        }
    }

    printf("%.2lf", mid);
    return 0;
}