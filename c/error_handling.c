#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp=fopen("sinha.txt","r");
    if(fp==NULL)
    {
        /*printf("the value of error is : %d", errno);
        printf("\nThe error message is : %s ", strerror(errno));*/
        perror("\nThe error message is");
        exit(0);
    }
    else
    {
        fclose(fp);
        exit(1);
    }
    
    return 0;
}