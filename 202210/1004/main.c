#include<stdio.h>
#include<string.h>


void exchange(char* left, char* right)
{
    while (left < right)
    {
        char temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}
void left_revolve(char arr[10], int k)
{
    exchange(arr, arr + k - 1);
    int len = strlen(arr);
    exchange(arr + k, arr + len - 1);
    exchange(arr, arr + len - 1);

}

int main()
{
    char arr[10] = "ABCDEF";
    int k = 2;
    left_revolve(arr, k);
    printf("%s", arr);
    return 0;
}

//AB CDEF
//BA FEDC
//CDEFAB
//left right
//exchange(left ,right)
//{
// while(left<right)
// {char temp = *left;
//*left = *right;
//*right = temp;
// 
// left++;
// right--;
//  }
// 
// 
//exchange(arr,&arr[k-1])
//exchange(&arr[k],&arr[len-1])
//exchange(arr,&arr[len-1])

//exchange(arr, arr+k-1)