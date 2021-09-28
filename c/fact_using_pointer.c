#include<stdio.h>
void fact(int i,int *x)
{
    int j;
    *x=1;
    for(j=1;j<=i;j++)
    {
        *x=*x*j;
    }
}
int main()
{
    int n,y;
    printf("Enter the number :\n");
    scanf("%d",&n);
    fact(n,&y);
    printf("The factorial of %d is :%d",n,y);
    return 0;

}