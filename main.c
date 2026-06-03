#include "test.h"

#include <stdio.h>

// some comment
typedef struct {
    size_t len;
    size_t cap;
    size_t *items;
} floatArr;

floatArr *fa_init(size_t cap);
void fa_deinit(floatArr **fa);
void fa_println(floatArr *fa);
    double *items;
} doubleArr;

doubleArr *da_init(size_t cap);
void da_deinit(doubelArr **da);
void da_println(doubleArr *da);

typedef struct {
    size_t len;
    size_t cap;
    int arr[];
} intArr;

int main(void) {
    printf("hello\n");
    printf("%d\n", some_fn(1, 3));
    printf("var example: %d\n", var_example);
    return 0;
}
