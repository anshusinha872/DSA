#include <stdio.h>
int main()
{
    int A[] = {1, 2, 3, 4,};
    printf("%d\n", &A[0]);
    printf("%d\n", &A[1]);
    printf("%d\n", &A[2]);
    printf("%d\n", &A[3]);
    //printf("%d\n",&A[4]);
    printf("%d",&A+1);
    return 0;
}