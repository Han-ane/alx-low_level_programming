#include "main.h"
#include <stdio.h>

int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);  // Pass the address of n using the & operator
    printf("n=%d\n", n);
    return 0;
}
