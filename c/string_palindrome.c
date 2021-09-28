#include<stdio.h>
void ispalindrome(char * string)
{
    char *ptr,*rev;
    ptr = string;
    while (*ptr!='\0')
    {
        ++ptr;
    }
    --ptr;
    for(rev=string;ptr>=rev;)
    {
        if(*ptr == *rev)
        {
            --ptr;
            rev++;
        }
        else
        {
            break;
        }
    }
    if(rev>ptr)
        printf("String is palindrome");
    else
        printf("string is not palindrome");
}
int main()
{
    char str[1000]="Anshu";
    ispalindrome(str);
    return 0;
}