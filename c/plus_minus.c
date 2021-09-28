#include<stdio.h>
void plusMinus(int arr_count, int arr[])
{
    float pos = 0.0, zero = 0.0, neg = 0.0;
    for (int i = 0; i < arr_count; i++)
    {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] == 0)
            zero++;
        else
        {
            neg++;
        }
    }
    float x, y, z;
    x = pos/arr_count;
    y = zero/arr_count;
    z = neg/arr_count;
    printf("%f\n%f\n%f", x, z, y);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    plusMinus(n,arr);
    return 0;
}