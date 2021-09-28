#include<stdio.h>
int main()
{
    int long n,max=0,count=0;//size of array;
    scanf("%ld",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int arr1[5]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(arr[i]==j)
            {
                arr1[j-1]++;
            }
        }
    }
    max=arr1[0];
    for(int i=0;i<4;i++)
    {
        if(max>=arr1[i+1])
            count++;
    }
    printf("%d",count+1);
    return 0;
}
