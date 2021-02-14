#include <stdio.h>
#include <limits.h>

int addAndFind(int a, int b, int *sum, int *div, int *mod) {
    *sum = a + b;
    if(b != 0) {
        *div = a / b;
        *mod = a % b;
    } else {
        fprintf( stderr, "Dalyba is nulio\n");
    }
}

int main () {
    int div, mod, sum;
    addAndFind(15, 0, &sum, &div, &mod);

    printf("%d %d %d", sum, div, mod);
}