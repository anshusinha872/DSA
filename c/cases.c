#include <stdio.h>
#include <string.h>
int main()
{
   char str1[100] = "Chandigarh ", str2[100] = "University";
   //strcat(str1,str2);
   puts(str1);
   puts(str2);
   printf("Uppercase : %s\n",strupr(str1));
   printf("Lowercase : %s\n",strlwr(str2));
   printf("Length : %d\n",strlen(str1));
   printf("Length : %d\n",strlen(str2));
   printf("Combined : %s\n",strcat(str1,str2));
   strcpy(str2,str1);
   printf("%s",str2);
   return 0;
}
