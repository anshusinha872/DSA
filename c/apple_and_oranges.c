#include<stdio.h>
int main()
{
    int s,t,a,b,m,n,x=0,y=0;
    //printf("Enter the value of S and T : ");
    scanf("%d %d",&s,&t);
    //printf("Enter the co-ordinate of apple and orange tress: ");
    scanf("%d %d",&a,&b);
    //printf("Enter the number of apple and orange: ");
    scanf("%d %d",&m,&n);
    int app[m];
    int org[n];
   // printf("Enter the distance of apple from the tree: ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&app[i]);
        app[i]=app[i]+a;
        if((app[i]<=t)&&(app[i]>=s))
            x++;
    }
    //printf("Enter the distance of oranges from the tree ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&org[i]);
        org[i]=org[i]+b;
        if ((org[i]<=t)&&(org[i]>=s))
            y++;
    }
    printf("%d %d",x,y);
    /*for(int i=0;i<m;i++)
        printf("%d ",app[i]);
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d ",org[i]);*/
    return 0;
}