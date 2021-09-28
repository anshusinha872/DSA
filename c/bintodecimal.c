#include<stdio.h>
#include<math.h>
int main()
{
    int i,decimal=0,rem,weight=2,binary;
    printf("Enter the binary number :");
    scanf("%d",&binary);
    i=binary;
    while(binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*weight;
        binary=binary/10;
        weight=weight*2;
    }
    printf("The decimal conversion of %d is %d",i,decimal);
    return 0;
}