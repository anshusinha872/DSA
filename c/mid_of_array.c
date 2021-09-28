#include<stdio.h>
int *findmid(int arr1[],int i)
{
    return &arr1[i/2];
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int *mid=findmid(arr,n);
    printf("%d is the mid of the given array",*mid);
    printf("\nThe mid of the given array is %d",arr[n/2]);
    return 0;
}