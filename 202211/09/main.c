#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


/**
 *
 * @param s string×Ö·û´®
 * @param n intÕûÐÍ
 * @return string×Ö·û´®
 */

void Exchange(char* s, int left, int right)
{

    while (left < right)  //n^2 = x   log2x=n
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}
char* trans(char* s, int n) {
    int left = 0;
    int right = n - 1;
    Exchange(s, left, right);

    int begin = 0;
    int end = 0;
    while (s[begin] != '\0')
    {
        while (s[end] != ' ' && s[end] != '\0')
        {
            end++;
        }
        Exchange(s, begin, end - 1);
        if (s[end] == '\0')
        {
            begin = end;
        }
        else
        {
            begin = end + 1;
            end = begin;
        }

    }
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
        else {
            s[i] -= 32;
        }
    }
    return s;
}

int main()
{
    char s[] = "This is a sample";
    printf("%s\n", trans(s, 16));
	return 0;
}