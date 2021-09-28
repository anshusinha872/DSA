#include<stdio.h>
int main()
{
    int m,n,count=0,res=0;
    scanf("%d %d",&m,&n);//num of element in arr a and b
    int a[m];
    int b[n];
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(int i=1;i<=100;i++)
    {
        res=1;
        for(int x=0;x<m;x++)
        {
            if(i%a[x]!=0)
                res=0;
        }
        for(int x=0;x<n;x++)
            if(b[x]%i!=0)
                res=0;
        if (res == 1)
            count++;
    }
    printf("%d",count);
    return 0;
}