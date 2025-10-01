#include <stdio.h>

int main() {
    int a, b;
    int* adr_a;
    int* adr_b;


    a = 10;
    b = 20;

    adr_a = &a;
    adr_b = &b;

    printf("La valeur de a : %d\n", a);

    *adr_a = 100;

    printf("La valeur de a : %d\n", a);

    return 0;
}
