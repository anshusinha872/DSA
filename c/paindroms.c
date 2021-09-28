#include<stdio.h>
int main()
{
    int n,i,sum=0,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    i=n;
    for(;i>=1;)
    {
        rem=i%10;
        sum=sum*10+rem;
        i=i/10;
    }
    if(sum==n)
        printf("The given number is palindrom");
    else
    {
            printf("The given is not a palindrom");
    }
    return 0;
}