#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*һֻ���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬������񫣬
�ֶ����һ�����ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����
һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ���һ��������N��
�������ٳ�ʱ����ֻʣ��һ�������ˡ��ʣ���һ�칲ժ�˶��ٸ����ӣ�*/

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



/*����ĿҪ���д����ͳ��һ���ַ��е��ʵĸ�������ν�����ʡ���ָ
���������ո���ַ�����������֮���ÿո�ָ����ո��������Ƕ����*/

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