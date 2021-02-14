int addAndFind(int a, int b, int *sum, int *div, int *mod) {
    *sum = a + b;
    if(b != 0) {
        *div = a / b;
        *mod = a % b;
    } else {
        fprintf(stderr, "Dalyba is nulio\n");
    }
}