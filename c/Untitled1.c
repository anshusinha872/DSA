#include<stdio.h>
int main()
{
    int a,b,c,sum=0;
    printf("Enter the 1st number :\n");
    scanf("%d",&a);
    printf("Enter the 2nd number :\n");
    scanf("%d",&b);
    printf("Enter the 3rd number :\n");
    scanf("%d",&c);
    sum=a+b+c;
    printf("%d+%d+%d=%d\n",a,b,c,sum);
    return 0;
}
