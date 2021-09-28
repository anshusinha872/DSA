#include<stdio.h>
float area(float a,float b){ return (a*b);}
float perimter(float a,float b){ return 2*(a+b);}
int add(int a,int b){return (a+b);}
int main()
{
    int choice,a,b;
    /*float (*ptrfunc[2])(float,float)={area,perimter};
    printf("Enter your choice:\n0 for area and 1 for perimeter");
    scanf("%d",&choice);
    printf("Enter the length and breadth of the rectangle");
    scanf("%d %d",&a,&b);
    printf("%f",ptrfunc[choice](a,b));*/
    int (*ptr)(int,int);
    ptr=&add;
    printf("Enter the two number\n");
    scanf("%d %d",&a,&b);
    printf("addition of two number is %d",ptr(a,b));
    return 0;
}