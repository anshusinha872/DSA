#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        min = min < arr[i] ? min : arr[i];
        max = max > arr[i] ? max : arr[i];
    }
    printf("Min and Max in the given array is %d and %d", min, max);
    return 0;
}