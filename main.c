#include "test.h"

#include <stdio.h>

typedef struct {
    unsigned long int len;
    unsigned long int cap;
    int arr[];
} intArr;

int main(void) {
    printf("hello\n");
    printf("%d\n", some_fn(1, 3));
    printf("var example: %d\n", var_example);
    return 0;
}
