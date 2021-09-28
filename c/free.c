#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    printf("Enter the no. of elements: ");
    scanf("%d",&i);
    int *ptr=(int*)malloc(i*sizeof(int));
    if(ptr==NULL)
        printf("memory can't be allocated");
    else
    {
        printf("memory is successfully allocated:\n");
        for (int j = 0; j < i; j++)
        {
            printf("Enter the %d element ", (j + 1));
            scanf("%d", (ptr + j));
        }
        printf("\n");
        printf("The elements stored are ");
        for (int j = 0; j < i; j++)
        {
            printf("%d ", *(ptr + j));
        }
        free(ptr);
        ptr=NULL;
        if (ptr == NULL)
            printf("\nmemory is freed");
        else
            printf("\nmemory is not freed");
    }
    return 0;
}