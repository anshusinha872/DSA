#include <stdio.h>

struct employee
{
    char name[50];
    int salary;
    int hour;
};
int main()
{
    char name[50];
    int salary;
    int hour;
    struct employee E[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name:");
        scanf("\n%[^\n]s", E[i].name);
        printf("Enter the salary:");
        scanf("%d", &E[i].salary);
        printf("Enter hour:");
        scanf("%d", &E[i].hour);
    }
    for (int i = 0; i < 10; i++)
    {
        if (E[i].hour >= 8 && E[i].hour <= 10)
            E[i].salary += 50;
        else if (E[i].hour >= 10 && E[i].hour <= 12)
            E[i].salary += 100;
        else if (E[i].hour > 12)
        {
            E[i].salary += 150;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Name:%s\n", E[i].name);
        printf("Salary:%d\n", E[i].salary);
    }
}