#include <stdio.h>
int main()
{
    int x, y, p, q, sum = 0;
    printf("Enter the two row and column of 1st matrix:\n");
    scanf("%d %d", &x, &y);
    printf("Enter the row and column of 2nd matrix :\n");
    scanf("%d %d", &p, &q);
    int arr1[x][y];
    int arr2[p][q];
    if (y == p)
    {
        printf("Enter the elements of the 1st matrix:\n");
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("Enter the elements of the 2nd matrix:\n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
        int arr3[x][q];
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < q; j++)
            {
                for (int k = 0; k < p; k++)
                {
                    sum += arr1[i][k] * arr2[k][j];
                }
                arr3[i][j] = sum;
                sum = 0;
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("The given matrix can't be multiplied");
    return 0;
}