#include <stdio.h>
#define S 2
struct student
{
    char name[20];
    char branch[10];
    char gender[20];
    int age;
};
int main()
{
    struct student s1[S];
    struct student *ptr;
    for (int i = 0; i < S; i++)
    {
        ptr = &s1[i];
        printf("Enter name of %d student : ", (i + 1));
        scanf("%[^\n]%*c", &(*ptr).name);
        printf("Enter branch of %d student : ", (i + 1));
        scanf("%[^\n]%*c", &(*ptr).branch);
        printf("Enter Gender of %d student : ", (i + 1));
        scanf("%[^\n]%*c", &(*ptr).gender);
        printf("Enter Age of %d student : ", (i + 1));
        scanf("%d", &(*ptr).age);
    }
    printf("\n");
    for (int i = 0; i < S; i++)
    {
        ptr = &s1[i];
        printf("name of %d student is %s \n", (i + 1), (*ptr).name);
        printf("branch of %d student is %s \n", (i + 1), (*ptr).branch);
        printf("Gender of %d student is %s \n", (i + 1), (*ptr).gender);
        printf("Age of %d student is %d \n", (i + 1), (*ptr).age);
    }
    return 0;
}