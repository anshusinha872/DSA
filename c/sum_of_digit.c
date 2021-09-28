#include<stdio.h>
int main()
{
    int n,sum=0,i,rem=0;
    printf("Enter the no. : ");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        rem=i%10;
        sum+=rem;
        i=i/10;
    }
    printf("The sum is %d",sum);
    return 0;
}