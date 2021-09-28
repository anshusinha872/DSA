//program to add two numbers
#include <stdio.h>
int main()
{
    int n, j, k;
    printf("Enter the no. of element in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the no. to be inserted: ");
    scanf("%d", &j);
    printf("Enter the position where it has to be inserted: ");
    scanf("%d", &k);
    int arr1[n + 1];
    for (int i = n; i >= 0; i--)
    {
        if (i >= k)
        {
            arr1[i + 1] = arr[i];
        }
        if (i < k)
        {
            arr1[i] = arr[i];
        }
        arr1[k] = j;
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}
