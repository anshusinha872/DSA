#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    printf("Enter the size of array: ");
    scanf("%d",&i);
    int *ptr=(int*)calloc(i,sizeof(int));
    //int *ptr=(int*)malloc(i*sizeof(int));
    if(ptr==NULL)
        printf("Memory can't be allocated:");
    else
    {
        printf("memory successfully allocated\n");
        printf("Enter the elements\n");
        for(int j=0;j<i;j++)
        {
            printf("Enter %d element ",(j+1));
            scanf("%d",(ptr+j));
        }
        printf("Elements stored in allocated memory are ");
        for(int j=0;j<i;j++)
        {
            //*(ptr+j)=(*ptr)+j;
            printf("%d ",*(ptr+j));
        }
    }
    return 0;
}