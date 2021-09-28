#include<stdio.h>
#include <math.h>
struct tri
{
    int a;
    int b;
    int c;
    int p;

};
int main()
{
    int n;
    struct tri s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&s[i].a,&s[i].b,&s[i].c);
        int x=0,y=0;
        x=(s[i].a+s[i].b+s[i].c)/2;
        y=x*(x-s[i].a)*(x-s[i].b)*(x-s[i].c);
        y=sqrt(y);
        s[i].p=y;
    }
    for(int i=0;i<n;i++)
    {
        s[i].p = (s[i].p<s[++i].p)?s[i].p:s[i].p
    }


}