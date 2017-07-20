#include<stdio.h>
int main()
{
   signed int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf(" the number is zero");
    }
    else if(n<0)
    {
        printf(" the number is negative");
    }
    else
    {
        printf("the number is positive");
    }
    return 0;
}
