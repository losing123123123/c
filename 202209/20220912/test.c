#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*一只猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，
又多吃了一个；第二天早上又将剩下的桃子吃掉一半，又多吃了
一个。以后每天早上都吃了前一天剩下的一半加一个。到第N天
早上想再吃时，见只剩下一个桃子了。问：第一天共摘了多少个桃子？*/

/*
int main()
{
    int N;
    scanf("%d", &N);
    int i;
    int t = 1;
    for (i = N; i > 1; i--)
    {
        t = (t + 1) * 2;

    }
    printf("%d\n", t);
}*/



/*本题目要求编写程序统计一行字符中单词的个数。所谓“单词”是指
连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。*/

/*
int main()
{
    char str[1000];
    gets(str);
    int i,j;
    int len=strlen(str);
    i=0;
    j=len-1;
    while(str[i]==' ')
    {
        i++;
    }
    while(str[j]==' ')
    {
        j--;
    }
    if(i==len&&j<0) printf("0\n");
    else{
    int n1=i;
    int n2=j;
    int temp=0;
    int l=0;
    for(i=n1+1;i<=n2;i++)
    {
       if(str[i]==' '&&str[i-1]!=' ') {l=1;temp++;}
    }
   printf("%d\n",temp+1);}
    return 0;
}
*/