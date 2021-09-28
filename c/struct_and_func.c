//call by value
/*#include<stdio.h>
struct student {
	char name[50];
    int age;
    int roll_no;
    float marks;
};
void print(char name[],int age,int roll,float marks);
int main()
{
    struct student s1={"Anshu",18,01,99.92};
    print(s1.name,s1.age,s1.roll_no,s1.marks);
    return 0;
}
void print(char name[],int age,int roll,float marks){
    printf("%s %d %d %.2f",name,age,roll,marks);
}*/
#include <stdio.h>
struct student
{
    char *name;
    float age;
    float marks;
    int roll;
    int sec;
};
void fun(char *p, float *i, float *m, int *r, int *s)
{
    printf("%s %.2f %.2f %d %d",p, *i, *m, *r, *s);
}
int main()
{
    struct student s1;
    //struct student s1={21.10,95.00,12,10};
    printf("Enter the name: ");
    scanf("%[^\n]%*c", s1.name);
    printf("Enter age: ");
    scanf("%f", &s1.age);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("Enter roll: ");
    scanf("%d", &s1.roll);
    printf("Enter sec: ");
    scanf("%d", &s1.sec);
    fun(&s1.name, &s1.age, &s1.marks, &s1.roll, &s1.sec);
    return 0;
}