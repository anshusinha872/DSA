#include<stdio.h>
int squareSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (2*i-1)*(2*i-1);
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("The sum is :- %d",squareSum(n));
    return 0;
}