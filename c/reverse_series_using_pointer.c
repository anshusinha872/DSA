#include<stdio.h>
int main()
{
    /*
    using array only;
    int n;
    scanf("%d",&n);
    int arr[n],*p;
    printf("Enter %d element in the string\n",n);
    for(p=arr;p<=arr+n-1;p++)
    {
        scanf("%d",p);
    }
    printf("elements in reverse order are \n");
    for(p=arr+n-1;p>=arr;p--)
    {
        printf("%d ",*p);
    }*/
    //using pointer
    int n;
    scanf("%d",&n);
    int arr[n],*ptr;
    for(ptr=arr;ptr<=arr+n-1;ptr++)
    {
        scanf("%d",ptr);
    }
    printf("Reserved array:\n");
    for(ptr=arr+n-1;ptr>=arr;ptr--)
    {
        printf("%d ",*ptr);
    }
    return 0;
}