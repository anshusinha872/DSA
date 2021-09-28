#include<stdio.h>
int main()
{
    FILE *fp;
    char name[30];
    fp=fopen("anshu.txt","w+");
    if(fp==NULL)
        printf("File doesn't exist");
    else
        printf("File exist\n");
        /*printf("Enter the name: ");
        scanf("%s",name);
        fprintf(fp,"%s\n",name);*/
        /*for(int i=97;i<=122;i++)
        {
            fprintf(fp,"%c\n",i);
        }*/
        char str[]="Hello my name is anshu";
        /*for(int i=0;str[i]!='\0';i++)
        {
            fputc(str[i],fp);
        }
        fputs(str,fp);*/
        /*char ch;
        while(1)
        {
            ch = fgetc(fp);
            if (ch == EOF)
            {
                printf("file contains nothing");
                break;
            }
            else
                printf("%c", ch);
        }*/
        char str1[50];
        /*fgets(str1,5,fp);
        printf("%s",str1);*/
        /*fscanf(fp,"%s",str1);
        printf("%s",str1);*/
        char str2[100];
        fputs(str,fp);
        //fprintf(fp,"%s",str);
        rewind(fp);
        //fscanf(fp,"%s",str2);
        fgets(str2,100,fp);
        printf("The stored in the file:\n");
        printf("%s",str2);
        fclose(fp);
    return 0;
}