#include<stdio.h>
int count(int n,int *number)
{
    int arr1[10]={0};
    for(int i=0;i<n;i++)
    {
        arr1[*(number+i)]++;
    }
    int cnt=0;
    for(int i=0;i<10;i++)
        if(arr1[i]>1)
            cnt++;
    return cnt;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",count(n,arr));
    return 0;
}