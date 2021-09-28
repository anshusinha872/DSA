#include<stdio.h>
void fun(int *b,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(b+i));
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int *ptr=&arr[0];
    fun(arr,len);
    return 0;
}