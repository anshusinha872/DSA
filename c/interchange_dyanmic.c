#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter the no. of element of array: ");
    int n=0;
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    for (int i = 0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    
    int ptr1=*(ptr);
    int ptr2 =*(ptr);
    for(int i=0;i<n;i++)
    {
        ptr1=ptr1<*(ptr+i)?ptr1:*(ptr+i);
        ptr2=ptr2>*(ptr+i)?ptr2:*(ptr+i);
    }
    int pos1=0,pos2=0;
    for(int i=0;i<n;i++)
    {
        if(*(ptr+i)==ptr1)
            pos1=i;
        if(*(ptr+i)==ptr2)
            pos2=i;
    }
    int temp;
    temp=*(ptr+pos1);
    *(ptr+pos1)=*(ptr+pos2);
    *(ptr+pos2)=temp;
    //printf("%d %d",ptr1,ptr2);
    printf("\nThe new array is:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}