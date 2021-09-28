#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y;
    printf("Enter the no. of rows: ");
    scanf("%d",&x);
    printf("Enter the no. of query: ");
    scanf("%d",&y);
    int **arr;
    arr=(int**)malloc(x*sizeof(int*));
    for(int i=0;i<x;i++)
    {
        int m;
        printf("Enter the size of %d rows",(i+1));
        scanf("%d",&m);
        int *temp=(int*)malloc(m*(sizeof(int)));
        for(int j=0;j<m;j++)
        {
            scanf("%d",(temp+j));
        }
        *(arr+i)=temp;
    }
    for(int i=0;i<y;i++)
    {
        int row,col;
        scanf("%d",&row);
        scanf("%d",&col);
        printf("%d\n",arr[row][col]);
    }
    return 0;
}