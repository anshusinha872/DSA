#include<stdio.h>
#define S 3
struct student {
    char name[20];
    char branch[10];
    char roll[20];
};
int main()
{
    struct student s1[S];
    struct student *ptr;
    for(int i=0;i<S;i++)
    {
        ptr=&s1[i];
        printf("Enter name of %d student : ",(i+1));
        scanf("%[^\n]%*c",&(*ptr).name);
        printf("Enter branch of %d student : ", (i + 1));
        scanf("%[^\n]%*c", &(*ptr).branch);
        printf("Enter Roll of %d student : ", (i + 1));
        scanf("%[^\n]%*c", &(*ptr).roll);
    }
    printf("\n");
    for (int i = 0; i < S; i++)
    {
        ptr = &s1[i];
        printf("name of %d student is %s \n", (i + 1),(*ptr).name);
        printf("branch of %d student is %s \n", (i + 1), (*ptr).branch);
        printf("Roll of %d student is %s \n", (i + 1), (*ptr).roll);
    }
    return 0;
}