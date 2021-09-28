#include<stdio.h>
int add(int *b,int n)
{
    int sum=0;
    for(int i=0; i<n;i++)
    {
        sum+=*(b++);
    }
    return sum;
}
int main()
{

    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",add(arr,n));
    return 0;
}