#include<stdio.h>
int main()
{
    int i,result=0;
    printf("Enter the no. :");
    scanf("%d",&i);
    for(int j=1;j<i;j++)
    {
        if(i%j==0)
        {
            result=result+j;
        }
    }
    if(result==i)
        printf("The given no. %d is the perfect no.",i);
    else
        printf("The given no. %d is not a perfect no.",i);
    return 0;
}