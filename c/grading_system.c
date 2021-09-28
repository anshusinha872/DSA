#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int j,diff=0,n=0;
        scanf("%d", &arr[i]);
        j=arr[i]/5;
        j=ceil(j)+1;
        diff=j*5-arr[i];
        if (diff < 3)
        {
            n=5*j;
            if(n>=40)
                arr[i]=n;
        }
    }
    for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);  
    return 0;
}