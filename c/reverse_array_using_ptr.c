#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The reversed array is:\n");
    int *ptr=&arr[n-1];
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr-i));
    }
    return 0;
}