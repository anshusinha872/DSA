// All three printf() statements
// in this cause undefined behavior
#include <stdio.h>

int main()
{
    int a = 10;
    printf("\n %d %d", a, a++);

    a = 10;
    printf("\n %d %d", a++, a);

    a = 10;
    printf("\n %d %d %d ", a, a++, ++a);
    return 0;
}
