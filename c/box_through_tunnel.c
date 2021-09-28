#include<stdio.h>
int main()
{

    int n, l,w,h;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d", &l, &w, &h);
        printf("\n");
        if (h < 41)
            printf("%d\n", (l * w * h));
    }
    return 0;
}