#include<stdio.h>
int main()
{
    int n,k,cnt=0;
    scanf("%d %d",&n,&k);
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        (num[i]% k==0)?++cnt:cnt;
    }
    printf("%d",cnt);
    return 0;

}