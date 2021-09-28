#include<stdio.h>
int main()
{
    int n,k,sum=0,count=0;
    scanf("%d %d",&n,&k);//n==length of the array and k= sum that has to divide
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum=arr[i]+arr[j];
            if(sum%k==0)
                count++;
        }
    }
    printf("%d",count);
    return 0;
}       