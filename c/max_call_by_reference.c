#include<stdio.h>
void max (int *i,int *n,int *j)
{
    *i=(*i>*n)?(*i>*j?*i:*j):(*n>*j?*n:*j);
}
int main()
{
    int i,n,j;
    printf("Enter the three numbers : ");
    scanf("%d %d %d",&i,&n,&j);
    max(&i,&n,&j);
    printf("The max of the no. is : %d",i);
    return 0;
}