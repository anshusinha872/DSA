#include <stdio.h>
struct name
{
    int age;
    int roll;
    int height;
};
int main()
{
    struct name arr[3];
    struct name *ptr;
    for (int i = 0; i < 3; i++)
    {
        ptr = &arr[i];
        printf("Enter the age of %d student", (i + 1));
        scanf("%d", ptr->age);
        printf("Enter the roll of %d student", (i + 1));
        scanf("%d", ptr->roll);
        printf("Enter the height of %d student", (i + 1));
        scanf("%d", ptr->height);
    }
    printf("Details:\n");
    for (int i = 0; i < 3; i++)
    {
        ptr = &arr[i];
        printf("age :- %d", ptr->age);
        printf("roll:-%d", ptr->roll);
        printf("height:- %d", ptr->height);
    }
    return 0;
}