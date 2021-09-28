#include<stdio.h>
int sumArray(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int mulArray(int arr[],int n)
{
    int mul=1;
    for(int i=0;i<=n;i++)
    {
        mul*=arr[i];
    }
    return mul;
}
void fun(int arr[],int n)
{
    int count2=0;
    int count3=0;
    int count4=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count2++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%3==0)
        {
            count3++;
        }
    }
    count4=(n-(count2+count3));
    int arr2[count2];
    int arr3[count3];
    int arr4[count4];
    //storing multiple of 2 in arr2
    int var=0;
    for(int i=0;i<n && var<=count2;i++)
    {
        if(arr[i]%2==0)
        {
            arr2[var]=arr[i];
            var++;
        }
    }
    printf("\n");
    printf("printing the array 2 which stored multiple of 2\n");
    
    for(int i=0;i<count2;i++)
    {
        printf("%d ",arr2[i]);
    }
    //storing multiple of 3 in arr3
    var=0;
    for(int i=0;i<n && var<=count3;i++)
    {
        if(arr[i]%3==0)
        {
            arr3[var]=arr[i];
            var++;
        }
    }
    printf("\n");
    printf("printing the array 3 which stored multiple of 3\n");
    for(int i=0;i<count3;i++)
    {
        printf("%d ",arr3[i]);
    }
    //storing the remaining elements in arr4
    var=0;
    for(int i=0;i<n && var<=count4;i++)
    {
        if(arr[i]%2!=0 && arr[i]%3!=0)
        {
            arr4[var]=arr[i];
            var++;
        }
    }
    printf("\nThe sum of elements of Array 4 is %d\n",sumArray(arr4,count4));
    printf("The multiple of elements of Array 4 is %d",mulArray(arr4,count4));
    
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //passing the array and array size to the fun function
    fun(arr,n);
}