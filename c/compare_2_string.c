#include<stdio.h>
#define Max 30
int main()
{
    char s1[Max];
    char s2[Max];
    gets(s1);
    gets(s2);
    if(strcmp(s1,s2)==0)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    return 0;
}
