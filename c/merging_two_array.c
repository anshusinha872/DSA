#include<stdio.h>
int main()
{
    printf("Enter the no. of element in the first array: ");
    int n;
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the no. of element in the second array: ");
    int j;
    scanf("%d",&j);
    int arr2[j];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("The merged array is:\n");
    int m=j+n;
    int arr3[m];
    int index=0;
    for(int i=0;i<n;i++)
    {
        arr3[index]=arr1[i];
        index++;
    }
    for(int i=0;i<j;i++)
    {
        arr3[index]=arr2[i];
        index++;
    }
    for(int i=0;i<m;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}