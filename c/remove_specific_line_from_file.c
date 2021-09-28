#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char filename[100];
    char ch;
    int line,temp=1;
    printf("Enter the name of the file: ");
    scanf("%s",filename);
    fp1=fopen(filename,"r");
    printf("The content of the file is :\n");
    ch = fgetc(fp1);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch = fgetc(fp1);
    }
    printf("\nEnter the line you want to delete: ");
    scanf("%d",&line);
    rewind(fp1);
    fp2=fopen("duplicate.txt","w");
    ch = fgetc(fp1);
    while (ch!=EOF)
    {
        
        if(ch =='\n');
            temp++;
        if(temp!=line)
        {
            putc(ch, fp2);
        }
        ch = fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    remove(filename);
    rename("duplicate.txt",filename);
    return 0;

}