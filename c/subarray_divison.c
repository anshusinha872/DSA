#include<stdio.h>
int main()
{
    int n,d,m,sum=0,count=0;//no. of square of chocolate
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d %d",&d,&m);//d= dayof birth and d=sum of square peice and m =no. of peice
    for(int i=0;i<n;i++)
    {   sum=0;
        for(int j=i;(j<i+m)&&(j<n);j++)
        {
            sum+=arr[j];
        }
        if(sum==d)
            count++;
    }
    printf("%d",count);
    return 0;
}