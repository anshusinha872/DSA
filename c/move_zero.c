#include<stdio.h>

int* zero_move(int x,int arr[])
{
    int j=0;
    for(int i=0;i<x;i++)
        if(arr[i]!=0)
            arr[j++]=arr[i];
    while(j<x)
        arr[j++]=0;
    return arr;
}
int main()
{
    int n,j=0;
    printf("Enter the total no. of element: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int *ptr1=zero_move(n,arr);
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr1+i));
    }
    return 0;
    
}