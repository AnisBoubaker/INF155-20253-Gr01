#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nb;
    int fact;

    printf("Calculer la factorielle de: ");
    scanf("%d", &nb);

    fact = 1;
    for(int i=1; i<=nb ; i++ ){
        fact = fact * i;
    }

    printf("La factorielle est %d\n", fact);

    return EXIT_SUCCESS;
}
