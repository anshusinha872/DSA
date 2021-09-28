#include <stdio.h>
int main()
{
    int a[3] = {0};
    int b[3] = {0};
    int res[2] = {0};
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            res[0]++;
        else if (a[i] == b[i])
        {
            res[0]=res[0];
            res[1]=res[1];
        }
        else
            res[1]++;
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", res[i]);
    }
    return 0;
}