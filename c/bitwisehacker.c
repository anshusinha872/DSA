#include <stdio.h>
int n,k,y=0,q,t,i, j, x,z=0;
int main()
{
    scanf("%d %d",&n,&k);
    for (int i = 1; i <= n; i++)
    {
        for (int j = (i + 1); j <= n; j++)
        {
            t = (i * j) / 2;
        }
    }
    int arr_or[t];
    int arr_or1[t];
    int arr_and[t];
    int arr_and1[t];
    int xor [t];
    int xor_1[t];
    for (i = 1; i <=n; i++)
    {
        for (j=(i + 1);j<=n;j++)
        {
            x=i&j;
            //printf("i=%d and j=%d and x=%d\n",i,j,x);
            arr_or[y]=x;
            y++;
        }
    }
    /*for (int y = 0; y < 2 * n; y++)
    {
        printf("%d ",arr[y]);
    }*/
    for(int y=0;y<=t;y++)
    {
        if(arr_or[y]<k)
        {
            arr_or1[y] = arr_or[y];
        }
        else
        {
            arr_or1[y]=0;
        }
    }
    for (int y = 0; y < t; y++)
    {
        //printf("%d ", arr_or1[y]);
        z = z > arr_or1[y] ? z : arr_or1[y];
    }
    printf("%d ",z);
    z=0;
    y=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = (i + 1); j <= n; j++)
        {
            x = i|j;
            //printf("i=%d and j=%d and x=%d\n",i,j,x);
            arr_and[y] = x;
            y++;
        }
    }
    /*for (int y = 0; y < 2 * n; y++)
    {
        printf("%d ",arr1[y]);
    }*/
    for (int y = 0; y < t; y++)
    {
        if (arr_and[y]<k)
        {
            arr_and1[y]=arr_and[y];
        }
        else
        {
            arr_and1[y]=0;
        }
    }
    printf("\n");
    for(int y=0;y<t;y++)
    {
        //printf("%d ",arr2[y]);
        z = z > arr_and1[y] ? z : arr_and1[y];
    }
    printf("%d\n", z);
    z = 0;
    y = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = (i + 1); j <= n; j++)
        {
            x = i^j;
            //printf("i=%d and j=%d and x=%d\n",i,j,x);
            xor[y] = x;
            y++;
        }
    }
    /*for (int y = 0; y < 2 * n; y++)
    {
        printf("%d ",arr1[y]);
    }*/
    for (int y = 0; y < t; y++)
    {
        if (xor[y] < k)
        {
            xor_1[y] = xor[y];
        }
        else
        {
            xor_1[y] = 0;
        }
    }
    for(int y = 0; y < t; y++)
    {
        //printf("%d ",xor_1[y]);
        z = z > xor_1[y] ? z : xor_1[y];
    }
    printf("%d",z);
    return 0;
}