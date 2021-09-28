#include <stdio.h>
int main()
{
    int n, k;
    printf("Enter the no. of element in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the no. that has to be inserted: ");
    scanf("%d", &k);
    int arr1[n + 1];
    arr1[n] = k;
    for(int i = 0;i<n;i++)
        arr1[i]=arr[i];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                int temp = arr1[j + 1];
                arr1[j + 1] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    printf("\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}