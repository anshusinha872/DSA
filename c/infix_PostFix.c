#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;
void push(char item)
{
    if (top >= MAX - 1)
        printf("\nStack Overflow.");
    else
    {
        top = top + 1;
        stack[top] = item;
    }
}
char pop()
{
    char item;
    if (top < 0)
    {
        printf("\nStack underflow");
        exit(1);
    }
    else
    {
        item = stack[top];
        top = top - 1;
        return (item);
    }
}
int is_operator(char sym)
{
    if (sym == '^' || sym == '*' || sym == '/' || sym == '+' || sym == '-')
        return 1;
    else
        return 0;
}
int precedence(char sym)
{
    if (sym == '^' || sym == '$')
        return (3);
    else if (sym == '*' || sym == '/')
        return (2);
    else if (sym == '+' || sym == '-')
        return (1);
    else
        return (0);
}
void InfixToPostfix(char InfixExp[], char PostfixExp[])
{
    int i, j;
    char item;
    char x;
    push('(');
    strcat(InfixExp, ")");
    i = 0;
    j = 0;
    item = InfixExp[i];
    while (item != '\0')
    {
        if (item == '(')
        {
            push(item);
        }
        else if (isdigit(item) || isalpha(item))
        {
            PostfixExp[j] = item;
            j++;
        }
        else if (is_operator(item) == 1)
        {
            x = pop();
            while (is_operator(x) == 1 && precedence(x) >= precedence(item))
            {
                PostfixExp[j] = x;
                j++;
                x = pop();
            }
            push(x);
            push(item);
        }
        else if (item == ')')
        {
            x = pop();
            while (x != '(')
            {
                PostfixExp[j] = x;
                j++;
                x = pop();
            }
        }
        else
        {
            printf("\nInvalid infix Expression.\n");
            exit(1);
        }
        i++;
        item = InfixExp[i];
    }
    if (top > 0)
    {
        printf("\nInvalid infix Expression.\n");
        exit(1);
    }
    if (top > 0)
    {
        printf("\nInvalid infix Expression.\n");
        exit(1);
    }
    PostfixExp[j] = '\0';
}
int main()
{
    char infix[MAX], postfix[MAX];
    printf("\nEnter Infix expression : ");
    gets(infix);
    InfixToPostfix(infix, postfix);
    printf("Postfix Expression: ");
    puts(postfix);

    return 0;
}