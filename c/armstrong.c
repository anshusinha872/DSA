#include <stdio.h>
int main()
{
    int i, n, rem, result = 0, storage = 1, cnt, count = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    i = n;
    while (i != 0)
    {
        i = i / 10;
        count++;
    }
    cnt = count;
    i = n;
    while (i != 0)
    {
        rem = i % 10;
        while (cnt != 0)
        {
            storage = storage * rem;
            cnt--;
        }
        result = result + storage;
        storage = 1;
        cnt = count;
        rem = 1;
        i = i / 10;
    }
    if (result == n)
    {
        printf("The given number %d is armstrong", n);
    }
    else
    {
        printf("The given number %d is not armstrong", n);
    }
    return 0;
}
