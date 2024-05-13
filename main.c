#include <stdio.h>

#include "add.h"

void main(void)
{
    printf("Hello world!\n");
    int a = 7;
    int b = 12;
    printf("%d + %d = %d\n", a, b, calculate_sum(a,b));
}