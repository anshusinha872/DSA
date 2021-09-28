#include<stdio.h>
int main()
{
    int i,n,j,power=1;
    float result;
    printf("Enter the base :");
    scanf("%d",&i);
    printf("Enter the exponent :");
    scanf("%d",&n);
    j=n;
    if(n>0)
    {
        while(n!=0)
        {
            power=power*i;
            n--;
        }
        n=j;
        printf("%d to the power of %d is %d",n,i,power);
    }
    else if(n<0)
    {
        while(n!=0)
        {
            power=power*i;
            n++;
        }
        n=j;
        printf("%d to the power of %d is 1/%d",n,i,power);
    }
    else
    {
        printf("%d to the power of %d is 1",n,i);
    }
    return 0;
    
}