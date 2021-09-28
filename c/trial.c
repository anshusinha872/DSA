#include <stdio.h>
struct marks
{
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int total;
};
int main()
{
    float total, avg;
    struct marks arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of %d student\n", i + 1);
        printf("Enter the marks of sub1:\n");
        scanf("%d", &arr[i].sub1);
        printf("Enter the marks of sub2:\n");
        scanf("%d", &arr[i].sub2);
        printf("Enter the marks of sub3:\n");
        scanf("%d", &arr[i].sub3);
        printf("Enter the marks of sub4:\n");
        scanf("%d", &arr[i].sub4);
        printf("Enter the marks of sub5:\n");
        scanf("%d", &arr[i].sub5);
    }
    for (int i = 0; i < 5; i++)
    {
        total = arr[i].sub1 + arr[i].sub2 + arr[i].sub3 + arr[i].sub4 + arr[i].sub5;
        avg = total / 5;
        printf("The average marks of %d student is :- %.2f\n", i + 1, avg);
    }
    return 0;
}