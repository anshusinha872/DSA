#include<stdio.h>
#define Max 5
int main()
{
    //int n;
    int arr[Max];
    //scanf("%d",&n);
    for(int i=0;i<Max;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=Max-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}