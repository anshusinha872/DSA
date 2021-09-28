#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,x=0,y=0;//store the no. of games played
    scanf("%d",&n);
    int **ptr=NULL;//creating a 2d array
    ptr=(int**)malloc(n*sizeof(int*));
    //printf("Enter the score of the match:\n");
    for(int i=0;i<n;i++)
    {
        int *temp=(int*)calloc(3,sizeof(int));
        //printf("Enter the score of %d match\n",(i+1));
        scanf("%d",(temp));
        *(ptr+i)=temp;
    }
    
    ptr[0][1]=ptr[0][0];
    ptr[0][2]=ptr[0][0];
    for(int i=1;i<n;i++)
    {
        ptr[i][1]=ptr[i-1][1]>ptr[i][0]?ptr[i-1][1]:ptr[i][0];//updating max score
        ptr[i][2]=ptr[i-1][2]<ptr[i][0]?ptr[i-1][2]:ptr[i][0];//updating min score
    }
    /*printf("follwoing are the details stored in the data base :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }*/
    for(int i=0;i<n-1;i++)
    {
        if(ptr[i+1][1]>ptr[i][1])
            x++;//if max score record breaks then x will incremented
        if(ptr[i+1][2]<ptr[i][2])
            y++;//if min score record breks then y will be incremented
    }
    printf("%d %d",x,y);
    return 0;
}