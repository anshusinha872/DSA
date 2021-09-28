#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    scanf("%[^\n]%*c",a);
    int arr[10]={0};
    int n=strlen(a);
    /*for(int i=0;i<n;i++)
    {
        if(a[i]=='0')
        {
            arr[0]=arr[0]+1;
        }
        else if (a[i] == '1')
        {
            arr[1] = arr[1] + 1;
        }
        else if (a[i] == '2')
        {
            arr[2] = arr[2] + 1;
        }
        else if (a[i] == '3')
        {
            arr[3] = arr[3] + 1;
        }
        else if (a[i] == '4')
        {
            arr[4] = arr[4] + 1;
        }
        else if (a[i] == '5')
        {
            arr[5] = arr[5] + 1;
        }
        else if (a[i] == '6')
        {
            arr[6] = arr[6] + 1;
        }
        else if (a[i] == '7')
        {
            arr[7] = arr[7] + 1;
        }
        else if (a[i] == '8')
        {
            arr[8] = arr[8] + 1;
        }
        else if(a[i]=='9') 
        {
            arr[9]=arr[9]+1;
        }
    }*/
    for(int i=0;i<n;i++)
    {
        if(a[i]>=48&&a[i]<=59)
        {
            arr[a[i]-48]++;
        }
    }
    for (int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}