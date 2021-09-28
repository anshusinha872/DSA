#include<stdio.h>
//#include <stdlib.h>
int main()
{
    printf("Enter the no. of element in the array: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=arr[0],k=arr[0];
    for(int i=0;i<n;i++)
    {
        j=j<arr[i]?j:arr[i];
        k=k>arr[i]?k:arr[i];
    }
    int pos1,pos2;
    for(int i=0;i<n;i++)
    {
        if (arr[i] == j)
            pos1 = i;
        if (arr[i] == k)
            pos2 = i;
    }
    int temp;
    temp=arr[pos1];
    arr[pos1]=arr[pos2];
    arr[pos2]=temp;
    printf("The new array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    /*printf("%d %d",j,k);
    printf("\n%d %d",pos1,pos2);*/
    return 0;
}