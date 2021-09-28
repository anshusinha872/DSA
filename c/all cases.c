#include<stdio.h>
#include<string.h>
#define Max 30
int main()
{
    int x,y,i=1;
    char s1[Max];
    char s2[Max];
    //printf("Enter the string :\n");
    //scanf("%s",s1);
    gets(s1);
    printf("\nEnter the operation you wish to perform on the given string:\n");
    printf("Enter '1' to find string length\n");
    printf("Enter '2' to Concatenate the strings\n");
    printf("Enter '3' to copy the string\n");
    printf("Enter '4' to convert string in UPPERCASE \n");
    printf("Enter '5' to convert string in LOWERCASE \n");
    printf("Enter '6' to duplicate the string\n");
    printf("Enter '7' to compare the strings\n");
    printf("Enter '8' to find first occurrence of given character\n");
    printf("Enter '9' to reverse the order\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            {
                y=strlen(s1);
                printf("\nString length = %d\n",y);
                break ;
            }
        case 2:
            {
            printf("\nEnter the second string.\n");
            scanf("%s",s2);
            strcat(s1 ,s2);
            printf("\nResult after Concatitation is = %s\n",s1);
            break;
            }
        case 3:
        {
            strcpy(s2,s1);
            printf("\nCopied string is : %s\n",s2);
            break;
        }
        case 4:
        {
            printf("\nThe uppercase of the given string %s is : %s\n",s1,strupr(s1));
            break;
        }
        case 5:
        {
            printf("\nThe lower case of the given string %s is : %s\n",s1,strlwr(s1));
            break;
        }
        case 6:
        {
            printf("The original string is : %s",s1);//strdup(s1);
            printf("\nThe duplicated string is : %s",strdup(s1));
            break;
        }
        case 7:
        {
            printf("Enter the 2nd string:\n");
            scanf("%s",s2);
            if(strcmp(s1,s2)==0)
            {
                printf("\nsame");
            }
            else
                {
                    printf("Not same");
                }
            break;
        }
        case 8:
            {
                //char mystr[100]="I'M an example of function strchr";
                printf ("%s", strchr(s1, 'f'));
                break;
            }
        case 9:
            {
                strrev(s1);
                printf("Reverse of the string is %s\n",s1);
                break;
            }
        default :
        {
            printf("\nEnter a valid option :\n");
            break;
        }
    }
        return 0;
}

