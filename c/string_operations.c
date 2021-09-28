#include<stdio.h>
#include<string.h>
int main()
{
    //strcpy;
    char arr1[]="Hello World";
    char arr2[20];
    strcpy(arr2,arr1);
    printf("arr1:- %s\n",arr1);
    printf("arr2:- %s\n",arr2);
    //strncpy;
    char arr3[4];
    strncpy(arr3,arr1,sizeof(arr3));
    arr3[4]='\0';
    printf("arr1:- %s",arr1);
    printf("\narr2:- %s",arr2);
    printf("\narr3:- %s",arr3);
    //strlen
    printf("\nThe length of arr1 is:- %d",strlen(arr1));
    printf("\nThe length of arr2 is %d",strlen(arr2));
    printf("\nThe length of arr3 is %d", strlen(arr3));
    //strrchr
    char ch='o';
    char *arr4=strrchr(arr1,ch);
    printf("\nstring after last occurence of %c is %s",ch,arr4);
    //strcat
    char arr5[]="My name is ";
    char arr6[]="Anshu Sinha";
    strcat(arr5,arr6);
    printf("\n%s",arr5);
    return 0;
}