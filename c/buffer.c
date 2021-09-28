#include<stdio.h>
int main()
{
    printf("Enter the string");
    char str[40],ch;
    scanf("%s",str);

    ch=getchar();
    printf("%s\n",str);
    printf("%c",ch);
    return 0;
}