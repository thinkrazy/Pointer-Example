#include <stdio.h>

void example(int *a);

int main()
{
    int a = 10;

    // Reference
    int *pA = &a;

    printf("Value: %i\n", a);

    // Passing a reference
    example(pA);
    
    printf("Value: %i\n", a);
    return 0;
}
// When passing a pointer/reference, you must specify that you are passing a pointer/reference.
void example(int *a)
{
    // Dereference
    *a = 15;
}