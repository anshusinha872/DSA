#include<stdio.h>
int main()
{
    int n,max_height,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max_height=arr[0];
    for(int i=0;i<n;i++)
    {
        max_height=max_height>arr[i]?max_height:arr[i];
    }
    for(int i=0;i<n;i++)dd
    {
        if(arr[i]==max_height)
            count++;
    }
    printf("%d",count);
    return 0;
    
}