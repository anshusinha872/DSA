#include <stdio.h>
long sum(int n, long ptr[])
{
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=ptr[i];
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &arr[i]);
    }
    printf("%d", sum(n, arr));
    return 0;
}