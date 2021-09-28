#include<stdio.h>
int main()
{
    int n,sum1=0,sum2=0,j=0,result=0;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        sum1+=arr[i][i];
    }
    //printf("%d",sum1);
    for (int i=n-1;i>=0;i--)
    {
        if(j!=n)
        {
            sum2+=arr[i][j];//4
            j++;//j=1;
        }
    }
    //printf("\n");
    //printf("%d",sum2);
    if(sum1>sum2)
        printf("%d",(sum1-sum2));
    else
        printf("%d",(sum2-sum1));
    return 0;
}