#include<stdio.h>
int main()
{
    int i;
    int x,y;
    scanf("%d",&i);
    for(int j=0;j<i;j++)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",x+y);
    }
    return 0;
}