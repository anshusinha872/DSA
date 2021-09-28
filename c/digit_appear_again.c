#include<stdio.h>
int main()
{
    int n,i,cnt=0,count,rem;
    scanf("%d",&n);
    int arr[10]={0};
    while(n>0)
    {
        rem=n%10;
        if(arr[rem]==1)
            break;
        arr[rem]=1;
        n=n/10;
    }
    if(n>0)
        printf("Yes");
    else 
        printf("No");
    return 0;

}