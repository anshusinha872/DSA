#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d %d",&n,&i);//n=no. of rows of aaray,i=qery;
    int arr[n];
    int *arr1[n];
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        int arr1[x];
        arr1[i]=&arr[x];
        for(int j=0;j<x;j++)
        {
            scanf("%d",&arr[j]);
        }
    }
    for(int y=0;y<n;y++)
    {
        int z;
        scanf("%d",&z);
        for(int k=0;k<n;k++)
        {
            if(k==z)
            {
                scanf
            }
        }
    }



    
}