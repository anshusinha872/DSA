#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements of array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int j=0;
        for(int k=i;k<n;k++)
        {
            if(arr[k]<arr[i])//k=4,i=0
            {
                j=k;//j=4,k=4
                int temp=0;
                temp=arr[i];//temp=64
                arr[i]=arr[k];//arr[i]=11,arr[k]=11
                arr[k]=temp;//arr[k]=64
            }
        }
    }
    printf("The shorted Array is \n");
    for(int i=0;i<n;i++)
    {
        
        printf("%d ",arr[i]);
    }
    return 0;
}