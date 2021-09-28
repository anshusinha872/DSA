#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main()
{
    FILE *fp=fopen("Details.txt","w+");
    int n,marks;
    char name[30];
    if(fp==NULL)
    {
        perror("Error message");
        exit(1);
    }
    else
    {
        printf("Enter the no. of students: ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("Enter the name of students: ");
            scanf("%s",name);
            printf("Enter the marks of the students: ");
            scanf("%d",&marks);
            fprintf(fp,"Name: %s | Marks: %d\n",name,marks);
        }
        exit(0);
    }
    fclose(fp);
    return 0;
}