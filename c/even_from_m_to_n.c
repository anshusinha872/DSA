#include<stdio.h>
int main()
{
    int n,j;
    printf("Enter the two number: ");
    scanf("%d %d",&n,&j);
    for(int i=n;i<=j;i++)
    {
        if(i%2==0)
            printf("%d ",i);
    }
    return 0;
}