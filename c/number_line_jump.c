#include<stdio.h>
int main()
{
    int x1,v1,x2,v2,res=0;
    printf("Enter the starting position and speed of 1st kangarooo: ");
    scanf("%d %d",&x1,&v1);
    printf("Enter the starting position and speed of 2nd kangaroo: ");
    scanf("%d %d",&x2,&v2);
    for(int i=0;i<10000;i++)
        if((x1+v1*i)==(x2+v2*i))
            res++;
    if(res==0)
        printf("NO");
    else
        printf("YES");
    return 0;

}