#include<stdio.h>
int main()
{
    int n,sum=0;
    //int *ptr;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //ptr=&arr[0];
    for(int i=0;i<n;i++)
    {
        sum+=*(arr+i);
    }
    printf("The sum is :- %d",sum);
    return 0;

}