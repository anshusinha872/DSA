#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    scanf("%[^\n]%*c",a);
    int n;
    n = strlen(a);
    //printf("%d\n", n);
    for (int i = 0; i < n; i++)
    {
        /*if (a[i]!=32)//ACSII value of blank is 32;
        {
            printf("%c", a[i]);
        }
        else
        {
            printf("\n");
        }*/
        if(a[i]==' ')
            printf("\n");
        else
            printf("%c",a[i]);
    }
    return 0;
}