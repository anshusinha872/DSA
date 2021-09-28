#include<stdio.h>
const int a=1,b=2;
int main()
{
    int x=1;
    switch(x)
        {
        case(a):
            printf("yes");
        case (b):
            printf("no\n");
            break;
        }

    return 0;
}
