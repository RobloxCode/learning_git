#include "test.h"

unsigned short var_example;

int some_fn(int a, int b)
{
    a = a + b;
    b++;
    int *ptr = &a;
    return 1;
}
