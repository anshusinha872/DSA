#include <stdio.h>
int main()
{
    int n, x, y, z;
    printf("Enter the no. of rows :");
    scanf("%d", &n);
    x = 2 * n - 1; //x==9
    y = x - 1;     //y==8
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            z = i < j ? i : j;
            z = z < y - j ? z : y - j;
            z = z < y - i ? z : y - i;

            printf("%d ", (n - z));
        }
        printf("\n");
    }
    return 0;
}