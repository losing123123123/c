#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


void left_revolve(char arr[10], int k)
{
    int i = 0;
    int len = strlen(arr);
    for (i = 0; i < k; i++)
    {
        char temp = arr[0];
        int j = 0;
        for (j = 0; j < len; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[len - 1] = temp;
    }
}
int main()
{
    char arr[10] = "ABCDEF";
    int k = 4;
    left_revolve(arr, k);
    printf("%s", arr);
    return 0;
}

//ABCDEF
//BCDEFA
//for(k);
//temp = arr[0];
//int j = 0;
//arr[j] = arr[j+1];
//6
//arr[5]