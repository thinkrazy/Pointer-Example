#include <stdio.h>

void example(int *a);

int main()
{
    int a = 10;
    int *pA = &a;

    printf("Value: %i\n", a);

    example(pA);
    
    printf("Value: %i\n", a);
    return 0;
}
void example(int *a)
{
    *a = 15;
}