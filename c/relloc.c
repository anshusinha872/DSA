#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the %d elements\n",n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",(ptr+j));
    }
    printf("Enter the no. of new element to be written\n");
    scanf("%d",&i);
    ptr=(int*)realloc(ptr,(i+n)*sizeof(int));
    printf("Enter the %d new elements\n",i);
    for(int j=i;j<(i+n);j++)
    {
        scanf("%d",(ptr+j));
    }
    printf("The total elements are ");
    for(int j=0;j<(i+n);j++)
    {
        printf("%d ",*(ptr+j));
    }
    return 0;
}