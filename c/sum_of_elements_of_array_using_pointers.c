#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    int *ptr;
    ptr=&arr[0];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=*(ptr+i);
    }
    printf("The sum of the array is %d",sum);
    return 0;
}