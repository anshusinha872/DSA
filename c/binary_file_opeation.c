#include<stdio.h>
int main()
{
    FILE *fp=fopen("binary.bin","wb");
    char str[]="Hello world";
    fwrite(str,sizeof(char),10,fp);
    char str1[50];
    //fread(&str1,sizeof(char),10,fp);
    fgets(str1,10,fp);
    printf("%s",str1);
    fclose(fp);
    return 0;
}