#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define maximum 5
void push();
void pop();
void display();
int top = -1, a[maximum];
void main()
{
    int n;
    printf("\n\t\t\t 1.PUSH 2.POP 3.DISPLAY 4.EXIT ");
    for (;;) //for infinite loop
    {
        printf("\n\n enter your choice : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
}
//to insert elements
void push()
{
    int v;
    if (top == maximum - 1)
    {
        printf("\n Stack overflow ");
    }
    else
    {
        printf("\n enter value :");
        scanf("%d", &v);
        top++;
        a[top] = v;
    }
}
//to delete elements
void pop()
{
    if (top == -1)
    {
        printf("\n Stack underflow .");
    }
    else
    {
        printf("\n %d is deleted", a[top]);
        top--;
    }
}
//to display elements
void display()
{
    if (top == -1)
    {
        printf("\n Stack is empty");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf(" %d", a[i]);
        }
    }
}