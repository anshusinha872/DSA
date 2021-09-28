#include <stdio.h>
#include <string.h>
int main()
{
    int n, sum = 0;
    char c;
    //printf("Enter the no. of students:\n");
    scanf("%d", &n);
    int arr[n];
    //printf("Enter the marks of the students\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    c = getchar();
    //printf("char stored in c is %c\n",c);
    if(c == 'b')
    {
        for(int i=0;i<n;)
        {
            sum=sum+arr[i];
            //printf("HI\n");
            i=i+2;
        }
    }
    else
    {
        for(int i=1;i<n;)
        {
            sum=sum+arr[i];
            i=i+2;
        }
    }
    printf("%d", sum);
    return 0;
}