#include<stdio.h>
int main()
{
    int i;
    printf("Enter the year :");
    scanf("%d",&i);
    if(i/400==0)
        printf("%d is the leap year",i);
    else if(i%100==0)
        printf("%d is not a leap year",i);
    else if(i%4==0)
        printf("%d is leap year",i);
    else
        printf("%d is not a leap year",i);
    return 0;
}