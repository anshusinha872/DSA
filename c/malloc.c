#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
        printf("Memory is not allocated:\n");

    else
    {
        printf("Memory is allocated:\n");
        for (int i = 0; i < n; i++)
        {
            printf("Enter %d interger ", (i + 1));
            scanf("%d", (ptr + i));
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", *(ptr + i));
        }
    }
    return 0;
}