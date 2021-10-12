#include <iostream>
#include <string.h>
 
using namespace std;
 
typedef struct Stack
{
    int top;
    int sz;
    int* arr;
}st;
 
st* createStack( int sz )
{
    st* stk = (st*) malloc(sizeof(st));
    if (!stk) 
        return NULL;
    stk->top = -1;
    stk->sz = sz;
    stk->arr = (int*) malloc(stk->sz * sizeof(int));
    return stk;
}
 
int isEmpty(st* stk)
{
    if(stk->top == -1)
        return 1;
    return 0;
}
 
char peek(st* stk)
{
    return stk->arr[stk->top];
}
 
char pop(st* stk)
{
    if (!isEmpty(stk))
        return stk->arr[stk->top--] ;
    return '$';
}
 
void push(st* stk, char op)
{
    stk->arr[++stk->top] = op;
}
 
 
int evaluatePostfix(string exp)
{
    st* stk = createStack(exp.size());
    int i;
 
    if (!stk) 
        return -1;
 
    for (i = 0; i<exp.length(); ++i)
    {
        if (isdigit(exp[i]))
            push(stk, exp[i] - '0');
        else
        {
            int val1 = pop(stk);
            int val2 = pop(stk);
            switch (exp[i])
            {
            case '+': push(stk, val2 + val1); 
            break;
            case '-': push(stk, val2 - val1); 
            break;
            case '*': push(stk, val2 * val1); 
            break;
            case '/': push(stk, val2/val1); 
            break;
            }
        }
    }
    return pop(stk);
}
 
int main()
{
    string exp;
    cout<<"Enter the exp.: ";
    cin>>exp;
    cout<<"postfix evaluation: "<< evaluatePostfix(exp);
    return 0;
}