#include<stdio.h>
void minmax(int a[],int len,int *min,int *max)
{
    for(int i=0;i<len;i++)
    {
        *min=*min<a[i]?*min:a[i];
        *max=*max>a[i]?*max:a[i];
    }
}
int main()
{
    int i,n,x;
    int arr[]={1,2,3,4,5};
    x=sizeof(arr)/sizeof(arr[0]);
    minmax(arr,x,&i,&n);
    printf("Max :- %d Min :- %d",n,i);
    return 0;
    
}