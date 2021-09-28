#include<stdio.h>
int main()
{
    int n,j;
    printf("Enter the no. of element in the array: ");
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the position from which num has to be deleted: ");
    scanf("%d",&j);
    for(int i=j;i<n-1;i++)
    {
        arr1[i]=arr1[i+1];
    }
    n--;
    printf("The array after deleting the element is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}