#include<stdio.h>
int main()
{
    int n,sum=0,max,min;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==i)
                continue;
            else
                sum+=arr[j];
        }
        arr1[i]=sum;
        sum=0;
    }
    min=arr1[0];
    max=arr1[0];
    for(int i=0;i<n;i++)
    {    //printf("%d ",arr1[i]);
        min=min<arr1[i]?min:arr1[i];
        max=max>arr1[i]?max:arr1[i];
    }
    printf("%d %d",min,max);
    return 0;
}