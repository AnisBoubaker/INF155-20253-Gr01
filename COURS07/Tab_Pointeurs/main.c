#include <stdio.h>

int main() {

    int tab[5] = {10, 20 , 30 , 40, 50};

    printf("La valeur au pointeur: %d\n", *tab);
    printf("La valeur a tab+1: %d\n",  *(tab+1)  );

    printf("L'adresse du tableau: %p\n", tab);
    printf("La'adresse de tab+1: %p\n", tab+1);


    return 0;
}
