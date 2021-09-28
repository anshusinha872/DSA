#include<stdio.h>
int main()
{
    int n;
    float i;
    scanf("%d %f",&n,&i);
    if(n%5==0&&(n+0.50)<i)
    {
        i=i-n-0.50;
        printf("%.2f",i);
    }
    else
    {
        printf("%.2f",i);
    }
    return 0;
}